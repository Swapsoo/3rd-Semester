#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 5

struct circular_queue
{
	int item[SIZE];
	int front;
	int rear;
};
int count =0;
typedef struct circular_queue cqueue;

void enqueue(cqueue *);
void dequeue(cqueue *);
void display(cqueue);



int main()
{
    cqueue cq;
	cq.rear=SIZE-1;
	cq.front=0;
	
	int choice;
	
	
	do
	{
		system("Cls");
		printf("Menu\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				enqueue(&cq);
				break;
			
			case 2:
				dequeue(&cq);
				getch();
				break;
			
			case 3:
				display(cq);
				getch();
				break;
				
			case 4:
				printf("Quitting.... press any key");
				getch();
				break;			
		}
		
	}
	
	while(choice!=4);
	
	return 0;
}

void enqueue(cqueue *c)
{
	int x;
	if (count==SIZE)
	{
		printf("Queue is full");
		getch();
	}
	else
	{
	printf("Enter data to insert: ");
	scanf("%d",&x);
	
	c->rear=(++c->rear)%SIZE;
	c->item[c->rear]=x;
	count++;
    }
}
	


void dequeue(cqueue *c)
{
	int x;
	if(count==0)
	
	{
	printf("Queue is Empty");
		getch();	
	}
	else
	{
		
		x=c->item[c->front];
		c->front=(c->front+1)%SIZE;
		count--;
		printf("Deleted elements is %d",x);
		getch();
	}
}

void display( cqueue c)
{
	int i;
	if (count==0)
	{
		printf("Queue is Empty");
		getch();
	}
	else
	{
		printf("front=%d\t rear=%d\n",c.front,c.rear);
		printf ("Elements on queue are:\t");
		if(c.front<=c.rear)
		{
			for(i=c.front;i<=c.rear;i++)
			printf("%d\t",c.item[i]);
		}
		else
		{
			for(i=c.front;i<SIZE;i++)
			    printf("%d",c.item[i]);
			for(i=0;i<=c.rear;i++)
			    printf("%d",c.item[i]);
			
		}
		
	}
}
	
	
	

