/* Increment / Decrement Operators */
#include<stdio.h>
#include<conio.h>
/*void main()
{
int x,y;
x = 5;
y = x ++;
printf("Post Increment value of x = %d and value of y = %d\n",x,y); // 6  5
x = 5;
y = ++x ;
printf("Pre Increment value of x = %d and value of y = %d\n",x,y); // 6  6
x = 5;
y = ++x * ++x;
printf("Pre Increment value of x = %d and value of y = %d\n",x,y); //49
getche();
}*/
//6 Short hand assignment operator 
//#include<stdio.h>
void main()
{
int num1,num2;
num1 = 5;
num2 = 10;
num1 += 10/3*2+5+num2;
printf("num1 = %d\n",num1); //26
num1 = 5;
num2 = 10;
num1 = num1 + (10/3*2+5+num2); //26
printf("num1 = %d\n",num1);
getche();
}