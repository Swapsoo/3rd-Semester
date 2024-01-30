#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack
{
	int data;
	struct stack *next;
	
};
typedef struct stack node;
node *newnode;
node *top=NULL;
void push(int);
void pop();
void display();
int main()
{
	int choice,x;
	do
	{
		system("cls");
		printf("MENU\n 1.For push\n 2.For pop\n 3.Display\n 4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter data to Push: ");
				scanf("%d",&x);
				push(x);
				break;
				
			case 2:
				pop();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				printf("Quitting...... press any key");
				break;			
		}
		getch();
	}
	while(choice!=4);
}

void push(int x)
{
	newnode=(node*)malloc(sizeof(node));
	if(newnode==NULL)
	{
		printf("Memory not sufficient");
		return;
	}
	if(top==NULL)
	{
		newnode->data=x;
		newnode->next=NULL;
		top=newnode;
	}
	else
	{
		newnode->data=x;
		newnode->next=top;
		top=newnode;
	}
	printf("%d was Pushed",x);
}

void pop()
{
	node *temp;
	if(top==NULL)
	{
		printf("Stack underflow");
		return;
	}
	printf("Popped data is %d",top->data);
	temp=top;
	top=top->next;
	free(temp);
}

void display()
{
	node *temp;
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Data items in Stack are: ");
		temp=top;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}

