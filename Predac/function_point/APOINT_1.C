
#include<stdio.h>
void s()
{
 printf("Hello");
}
void main()
{
void (*p)(void);
p=s;
printf("%u",s);//print address of function s
printf("%u",p);//print address of function s- p is holding s

p(); //calling function method1

(*p)();//calling function method 2

s();//method3

//p=main;
//p();

}




