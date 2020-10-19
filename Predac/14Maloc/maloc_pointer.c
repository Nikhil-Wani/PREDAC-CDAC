
#include<malloc.h>
#include<stdio.h>
void main()
{
	int *ptr,req,i,*p;

	puts("How many nos");

	scanf("%d",&req);

	ptr=(int *)malloc(req*sizeof(int));
	p=ptr;
	printf("Enter %d  numbers",req);

	for(p;p<(ptr+req);p++)
	{
		scanf("%d",p);

	}
	for(i=0;i<req;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
