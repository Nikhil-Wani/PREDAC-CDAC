#include<stdio.h>
void main()
{
	int i,a=0,d=0,n=0;
	int arr[]={5,13,2,1,0};

	for(i=0;i<4;i++)
	{
		if(arr[i]<arr[i+1])
		{
		a++;
		}
		 if(arr[i]>arr[i+1])
			{d++;
		 }

	}
	if(a==4)
		printf("ascending");
	else if(d==4)
		printf("descen");
	else
		printf("not sorted");
	
	getche();

}