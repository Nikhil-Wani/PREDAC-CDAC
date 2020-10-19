
#include<malloc.h>
#include<stdio.h>
void main()
{
	int *ptr,req,i;

	puts("How many nos");
	scanf("%d",&req);

	ptr=(int *)malloc(req*sizeof(int));

	printf("Enter %d  numbers",req);

	for(i=0;i<req;i++)
	scanf("%d",&ptr[i]);
	
	for(i=0;i<req;i++)
	printf("%d\n",ptr[i]);
	
}
