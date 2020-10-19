#include<stdio.h>
void main()
{
int i,n,max,no;

n=0;
printf("enter no");
scanf("%d",&no);
max=no;
for(i=2;i<=5;i++)
{
scanf("%d",&no);
	if(max<no)
	{n=max;
	max=no;
	}

	else
	{if(n<no)
	 n=no;	
	}
}
printf("%d",n);
}
}
