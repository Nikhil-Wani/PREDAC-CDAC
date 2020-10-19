
typedef struct queue
{
	int arr[5];
	int rear, front;
}QUE;

void insert(QUE *p, int val)
{
	if(p->rear==5-1)
	{
		printf("\nQue is Full");
	}
	else
	{
		p->rear++;
		p->arr[p->rear]=val;
	}
}

int remov(QUE *p)
{
	int val=0;
	if(p->front==p->rear)
	{
		printf("\nQueue is empty");
	}
	else
	{
		p->front++;
		val=p->arr[p->front];
	}
	return val;
}

void main()
{
	QUE q;
	int x;
	clrscr();
	q.rear=-1;
	q.front=-1;
	insert(&q, 10);
	insert(&q, 20);
	insert(&q, 30);
	x = remov(&q);
	printf("\n%d", x);
	getch();
}



