#include <stdio.h>

#define MAX 5

typedef struct
{
	int arr[MAX];
	int rear;
	int front;
}QUEUE;

void init(QUEUE *p)
{
	p->front=-1;
	p->rear=-1;
}

void add(int val,QUEUE *p)
{
	p->rear++;
	p->arr[p->rear] = val;
}
int remov(QUEUE *p)
{
	int val=0;
	p->front++;
	val = p->arr[p->front];
	return val;
}
int empty(QUEUE *p)
{
	if(p->front==p->rear)
		return 1;
	else
		return 0;
}
int full(QUEUE *p)
{
	if(p->rear==MAX-1)
		return 1;
	else
		return 0;
}

void main()
{
	int choice;
	int num;
	QUEUE q;
	clrscr();
	init(&q);

	do
	{
		printf("\n\n1. Add \n2. Remove\n0. Exit\nEnter ur choice...");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				if(full(&q))
				{
					printf("\n Queue is full.");
					break;
				}
				else
				{
					printf("\nEnter number to be pushed..");
					scanf("%d", &num);
					add(num,&q);
					break;
				}
		case 2:
			if(!empty(&q))
			{
				num = remov(&q);
				printf("\nNumber poped..%d", num);
			}
			else
				printf("\nQueue is empty");
			break;
		}
	}while(choice!=0);
	printf("\n\n");
}








