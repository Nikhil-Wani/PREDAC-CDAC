
typedef struct stack
{
	int arr[5];
	int top;
}STACK;

void push(STACK *p, int val)
{
	if(p->top==5-1)
	{
		printf("\nStack is Full");
	}
	else
	{
		p->top++;
		p->arr[p->top]=val;
	}
}

int pop(STACK *p)
{
	int val=0;

	if(p->top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		val=p->arr[p->top];
		p->top--;
	}
	return val;
}

void main()
{
	STACK s;
	int x;
	clrscr();
	s.top=-1;
	push(&s, 10);
	push(&s, 20);
	push(&s, 30);
	push(&s, 40);
	push(&s, 50);
	x = pop(&s);
	printf("\n%d", x);
	getch();
}



