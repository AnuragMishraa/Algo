/*Implement linear queue using array*/

#include<stdio.h>
#include<stdlib.h>

void insert();
void delete1();
void display();

int Queue[50],size,rear=-1,front=-1;
main()
{
	int choice;
	printf("Enter the size of queue");
	scanf("%d",&size);
	while(1)
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.EXIT\n");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete1();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\nWrong choice\n");
		}
	}
}
void insert()
{
	int item;
	if(rear == size-1)
	{
		printf("\nQueue Overflow\n");
	}
	else
	{
		printf("\nEnter the value to insert\n");
		scanf("%d",&item);
		if(rear == -1)
		{
			front++;
		}
		rear++;
		Queue[rear] = item;
	}
}
void delete1()
{
	if((front==-1) ||(front == rear+1))
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		printf("\nDeleted value = %d\n",Queue[front]);
		front++;
	}
}
void display()
{
	int index;
	if((front==-1) ||(front == rear+1))
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		printf("\nElements of queue are\n");
		for(index=front;index<=rear;index++)
		{
			printf("%d\n",Queue[index]);
		}
	}
}
