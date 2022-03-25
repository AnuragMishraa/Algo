#include<stdio.h>
#include<stdlib.h>

void insert();
void delete1();
void display();
struct node
{
	int info;
	struct node *next;
};
struct node *front = NULL, *rear = NULL;

main()
{
	int choice;
	while(1)
	{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
					break;
			case 2:delete1();
					break;
			case 3:display();
					break;
			case 4:exit(0);
			default:printf("\nWrong Choice\n");
		}
	}
}
void insert()
{
	struct node *temp;
	int item;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("\nQueue Overflow\n");
	}
	else
	{
		printf("\nEnter the value to insert\n");
		scanf("%d",&item);
		temp->info = item;
		temp->next = NULL;
		if(rear == NULL)
		{
			rear = temp;
			front = temp;
		}
		else
		{
			rear->next = temp;
			rear = temp;
		}
	}
}
void delete1()
{
	struct node *temp;
	if(front == NULL)	
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		temp = front;
		printf("\nDeleted value = %d\n",temp->info);
		front = front->next;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	if(front == NULL)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		temp = front;
		printf("\nValues of Queue are\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp = temp->next;
		}	
		printf("\n");
	}
}
