#include<stdio.h>
void main()
{
int a=5;
int const *p=&a;

 
a++;
//*p=9;

printf("%d",a);

printf("%d",*p);

p++;
}