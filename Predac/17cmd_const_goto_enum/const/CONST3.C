#include<stdio.h>
void main()
{

int a;
int *const p=&a  ;
a=5;
   //p++;
   a++;
  *p=9;
printf("\n%d",a);
printf("\n%d",*p);
printf("\n%u",&a);
printf("\n%u",&p);

}