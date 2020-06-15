//stack using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top=-1;
void push();
void pop();
void disp();
int main()
{
	int ch;
	printf("1.PUSH or Insert\n");
	printf("2.POP or Delete\n");
	printf("3.Display\n");
	printf("4.End program");
	while(1)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					disp();
					break;
				}
			case 4:
				{
					exit(0);
				}
			default:
				{
					printf("Wrong choice");
				}
		}
	}
}
void push()
{
	int data;
	if(top==MAX-1)
	{
		printf("\n Overflow or Stack is Full");
	}
	else
	{
		printf("Enter Element to be pushed: ");
		scanf("%d",&data);
		top++;
		a[top]=data;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Underflow or Stack is Empty");
	}
	else
	{
		printf("Popped element: %d",a[top]);
		top--;
	}
}
void disp()
{
	int i;
	if (top>=0)
	{
		printf("Element: ");
		for(i=top;i>=0;i--)
			printf("\n %d",a[i]);
	}
	else
	{
		printf("The stack is empty");
	}
}
