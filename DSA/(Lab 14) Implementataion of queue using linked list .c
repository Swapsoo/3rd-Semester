//Implementation of Linear Queue
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct queue
{
	 int data;
	 struct queue *next;
};

typedef struct queue node;
node *newnode;
node *front=NULL;      //removing from end of the linked list
node *rear=NULL;     //adding from beginning of the linked list
void enqueue(int);
void dequeue();
void display();
int main()
{
	int choice,x;
	do
	{
		system("cls");
		printf("Menu\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				printf("Enter data to enqueue :");
				scanf("%d",&x);
				enqueue(x);
				break;
				
			case 2:
				dequeue();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				printf("Quitting..... :");
				break;
		}
		getch();
		
	} 
	while(choice!=4);
}

void enqueue(int x)
{
	newnode=(node*)malloc(sizeof(node));
	if(newnode==NULL)
	{
		printf("Memory not sufficient");
		return;
	}
	if (rear==NULL)
	{
		newnode->data=x;
		newnode->next=NULL;
		front=newnode;
		rear=newnode;
	}
	else
	{
		newnode->data=x;
		newnode->next=rear;
		rear=newnode;
	}
	printf("%d was added to the queue",x);
	
}

void dequeue()
{
	node *temp;
	if(front==NULL)
	{
		printf("Queue is empty");
		return;
	}
	if(rear==front)
	{
		printf("Removed data is %d",front->data);
		free(front);
		rear=front=NULL;
	}
	else
	{
		temp=rear;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		printf("Removed data is %d",front->data);
		free(front);
		front=temp;
		front->next=NULL;
	}
	
}

void display()
{
	node *temp;
	if(rear==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Data item in queue are: ");
		temp=rear;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
