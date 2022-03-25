/*Implement queue using 2 stacks*/
#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int stack1[30],stack2[30],size,top1=-1,top2=-1;
main()
{
	int choice;
	printf("Enter size of queue");
	scanf("%d",&size);
	while(1)
	{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
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
void push()
{
	int item;
	if(top1 == size-1)
	{
		printf("\nQueue Overflow\n");
	}
	else
	{
		printf("\nEnter the value to insert");
		scanf("%d",&item);
		top1++;
		stack1[top1] = item;
	}
}
void pop()
{
	if(top1 == -1)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		while(top1 != -1)
		{
			top2++;
			stack2[top2] = stack1[top1];
			top1--;
		}
		printf("\nDeleted value = %d\n",stack2[top2]);
		top2--;
		while(top2 != -1)
		{
			top1++;
			stack1[top1] = stack2[top2];
			top2--;
		}
	}	
}
void display()
{
	int index;
	if(top1 == -1)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		printf("\nValues of Queue are\n");
		for(index=0;index<=top1;index++)
		{
			printf("%d\t",stack1[index]);
		}
	}
	
}
