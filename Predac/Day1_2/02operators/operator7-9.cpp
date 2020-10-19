//Relational Operators
#include<stdio.h>
#include<conio.h>
/*
void main()
{
int num1 = 5, num2 = 6, result;
result = num1 > num2 < 0;
printf("%d",result); //0
getche();
}
//8 Conditional Operator 
//#include<stdio.h>
void main()
{
int a = 10,b = 9,c = 8,result;
result = (a>b?(a>c?a:c):(b>c?b:c));
printf("Number is %d",result); //10
getche();
}*/
//9 Test every condition separately
//Assignment with solution
#include<stdio.h>
void main()
{
//ONE
int i=0,j;
j= i++ +i++ ;
printf("%d\n%d\n",i,j);
j= - ++i;
printf("%d\n%d\n",i,j);
//Two
i=0;
//j=i++ +++i;//error C2105: '++' needs l-value
printf("%d\n%d\n",i,j);
//Three
i=0;
//j=++i++i;//++needs l-value
printf("%d\n%d\n",i,j);
//Four
i=0;
j=++i + ++i;
printf("%d\n%d\n",i,j);//2  4
//Five
i=0;
//j=++i++;//C2105++needs l-value
printf("%d\n%d\n",i,j);
//Six
i=0;
j=-++i; //-ve value of j Unary negation
printf("%d\n%d\n",i,j);
//Seven
i=0;
//j=+++i; //+ve value of j Unary +
printf("%d\n%d\n",i,j);
//Eight
i=0;
j=i+++ ++i; // 2 2
printf("eight :%d\n%d\n",i,j);
//Nine
i=0;
j=i++ +i++; // 2 0
printf("%d\n%d\n",i,j);
//Ten
i=0;
j=i+++ i++; // 2 0
printf("%d\n%d\n",i,j);
//Eleven
i=0;
j=((printf("pre\n"),++i)+(printf("Post\n"),i++));
printf(" %d\n%d\n",i,j);
printf("Post %d\n\n",i++);
getche();
}