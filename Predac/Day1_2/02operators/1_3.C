/*#include<stdio.h>
void main()
{
printf("Hello World");
}
 */
 /*Define -- Preprocessor
#include<stdio.h>
#define SQR(X) (X)*(X)
void main()
{
int num1=10;
int x = 7;
printf("Square of %d is %d\n",num1,SQR(num1)); //100
printf("Square of %d is %d\n",num1,SQR(3+2));  //25
printf("%d\n",sizeof(x));//2
x = 10%10;
printf("%d\n",x);//0
}
  */
//3 Arithmatic Operator
#include<stdio.h>
void main()
{
int num1,num2,num3,result;
float f_num = 10.5;
num1 = 10;
num2 = 5;
num3 = 2;
result = num1 + num2 * num3;
printf("Answer is %d\n", result); //20
result = (num1 + num2) * num3;   //30
printf("Answer is %d\n", result);
result = num1 % num3;
printf("Answer is %d\n", result); //0
result = 9/7*3;
printf("Answer is %d\n", result); //3
result = num1 % num3;
printf("Answer is %d\n", result);  //0
}