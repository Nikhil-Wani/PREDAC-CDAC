//Stack --undo,browser back button,{} matching,recurssive function,inbox of mail,sms
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void print();
void duplicate();
void swap();
void clear();
void push();
void peak();
void pop();
int i,stack[15],ch=0,top=-1,item,temp;
void main()
{

while(ch!=7)
{
   printf("\t\t\t\tMENU");
   printf("\n1.push stack\n2.pop \n3.peak \n4.Duplicate \n 5.swap \n6.Clear the stack\n7.Print whole stack\n8.Exit\n");
   scanf("%d",&ch);
   if(ch<1||ch>7&&isdigit(ch)==0)
   continue;
   switch(ch)
   {
   case 1:push();
		  break;
   case 2:pop();
		  break;
   case 3:peak();

	  break;
   case 4:duplicate();

	  break;
   case 5:
	 swap();
	  break;
   case 6:clear();
		  break;
   case 7:print();
		 break;
   case 8:
	   clrscr();
	   printf("\n\n\n\n\n\t\t\t\tThank You");
	   getch();
	   exit(0);
   }
}
getch();
}



void push()
{


 if(top==15-1)
	  {	printf("\nOverflow\n");
		getch();
	  }
	  else
		{
		 printf("\nEnter the item to be inserted\n");
		 scanf("%d",&item);
		 stack[++top]=item;
		 }
}

void pop()
{
 if(top==-1)
		{
		printf("\nThe stack is empty so cannot display\n");
		getch();
		}
	  else
	  {
	  printf("\nThe top element=%d\nThe No. of elements=%d\n",stack[top--],top);
	  getch();
	  }

}

void peak()
{
 if(top==-1)
		{
		printf("\nThe stack is empty so cannot display\n");
		getch();
		}
	  else
	  {
	  printf("\nThe top element=%d\nThe No. of elements=%d\n",stack[top],top);
	  getch();
	  }

}

void duplicate()
{ if(top==-1)
		{
		printf("\nThe stack is empty so cannot duplicate\n");
		getch();
		}
	  else
	  if(top==15-1)
		{
		printf("\nThe stack is full so cannot duplicate\n");
		getch();
		}
	  else
	  {
	  stack[top+1]=stack[top];
	  printf("The element is duplicated%d",top);
		top++;
	  getch();
	  }

}
void swap()
{

 if(top>=1)
	  {
	  temp=stack[top];
	  stack[top]=stack[top-1];
	  stack[top-1]=temp;
	  printf("\nThe elements are swapped");
	  getch();
	  }
	  else
	  {
	  printf("\ncannot swap as less than 2 elements are in stack\n");
	  getch();
	  }
}


void clear()
{

top=-1;
	  printf("\n The stack is cleared\n");
	  getch();


}

void print()
{


if(top==-1)
		printf("\nStack empty");
	 else
		{
		for(i=top;i>=0;i--)
			{
printf("\nstack[%d]=%d",i+1,stack[i]);
			 }
		 }
	 getch();


}