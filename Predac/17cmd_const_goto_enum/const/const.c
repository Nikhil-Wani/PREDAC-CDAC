#include<stdio.h>
void main()
{int *p;

const int a=5;

int const b=7;

printf("%d",a);

//a=99; err value can not be modified

p=&a;
*p=99;

}