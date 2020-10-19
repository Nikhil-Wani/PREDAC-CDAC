#include<stdio.h>
void s(int x)
{
 printf("Hello");
 printf("%d",x);
}
void main()
{int x;

void (*p)(int); //passing parameter
x=5;
p=s; //pointing function s
printf("%u",s);
p(x); //calling method1
(*p)(x);////calling method2
s(x);//calling method3
}

