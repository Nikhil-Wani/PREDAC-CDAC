#include<stdio.h>
#include<conio.h>
int s(int x)
{ return x*x;

}
int c(int p)
{   return p*p*p;
}
void main()
{
int x,ans;
int (*p)(int); //passing parameter -returning value

x=5;
p=s; //pointing to s
ans=p(x); //calling function
printf("%d",ans);
p=c; //now pointing to c
ans=p(x); //calling function
printf("%d",ans);
}

