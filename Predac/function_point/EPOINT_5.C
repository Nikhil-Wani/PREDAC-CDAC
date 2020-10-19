#include<stdio.h>
int s(int x)
{return x*x;}

int c(int p)
{return p*p*p;}

void main()
{ int x,ans;
 int (*p)(int);
char ch;
 x=5;
	printf("enter choice s,c");
	scanf("%c",&ch);
//pointing and calling function as per condition
 if(ch=='s')
 {	p=s;
	  ans=p(x);
	printf("%d",ans);
}
 else if(ch=='c')
	{p=c;
	ans=p(x);
	printf("%d",ans);}  }

