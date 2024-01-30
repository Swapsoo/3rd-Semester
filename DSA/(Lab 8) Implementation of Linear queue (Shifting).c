//Enqueue Dequeue
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 5

struct linear_queue
{
	int lq[SIZE];
	int front;
	int rear;
};

typedef struct linear_queue queue;

void enqueue(queue*);
void dequeue(queue*);
void display(queue);

void main()
{
	int choice;
	queue q;
	q.front=0;
	q.rear=-1;
	
	do
	{
		system("Cls");
		printf("Menu\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				enqueue(&q);
				break;
			
			case 2:
				dequeue(&q);
				getch();
				break;
			
			case 3:
				display(q);
				getch();
				break;
				
			case 4:
				printf("Quitting.... press any key");
				getch();
				break;			
		}
		
	}
	
	while(choice!=4);
	
}

void enqueue(queue *q)
{
	int x;
	if (q->rear==SIZE-1)
	{
		printf("Queue is full");
		getch();
		return;
	}
	printf("Enter data to insert: ");
	scanf("%d",&x);
	
	(q->rear)++;
	q->lq[q->rear]=x;
	
}

void dequeue(queue *q)
{
	int i;
	if (q->rear< q->front)
	{
		printf("Queue is Empty");
		getch();
		return;
	}
	printf("Deleted element is : %d",q->lq[q->front]);
	
	for(i=q->front+1
	;i<=q->rear;i++)
	{
		q->lq[i-1]=q->lq[i];
	}
	
	q->rear--;
}

void display(queue q)
{
	int i;
	if (q.rear<q.front)
	{
		printf("Queue is Empty");
		getch();
		return;
	}
	printf ("Elements on queue are: \t");
	for(i=q.front;i<=q.rear;i++)
	{
		printf("%d\t",q.lq[i]);
	}
}
