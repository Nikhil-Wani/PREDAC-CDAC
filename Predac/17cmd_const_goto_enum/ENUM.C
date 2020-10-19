#include<stdio.h>
void main()
{ int n;   
enum day {monday ,tuesday,wednesday};

enum day a;
a=tuesday;
printf("%d",a);
printf("enter 0 for monday 1 for tuesday and so forth....")
scanf("%d",&n);
 
switch(n)
{
case 0: printf("monday");break;
case 1: printf("tuesday");break;
case 2: printf("wednesday");break;


}
}