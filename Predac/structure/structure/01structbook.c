#include<stdio.h>
void main()
{	struct book
	{
	int pgno;
	float price;
	char bname[25];
	};

struct book s2,b2;
struct book b1={350,250.50,"Kanetkar"};

printf("enter pgno price and bookname");
scanf("%d %f %s",&s2.pgno,&s2.price,s2.bname);

printf("%d %f %s",s2.pgno,s2.price,s2.bname);
b2=b1;
printf("%d %f %s",b2.pgno,b2.price,b2.bname);

}