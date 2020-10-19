#include<conio.h>
#include<stdio.h>
void main()
{
	struct
	{
		char nm[20];
		int eno;
		int sub[5];
		int tot;
	}s[3];
	int i=0,j=0,n;
	for(i=0;i<=2;i++)
	{
		printf("\n\t Entser name : ");
		flushall();
		gets(s[i].nm);
		printf("\n\t Enter exam no : ");
		scanf("%d",&s[i].eno);
		for(j=0;j<5;j++)
		{
			printf("\n\t Enter marks for sub[%d] : ",j+1);
			scanf("%d",&s[i].sub[j]);
		}
		printf("\n\t Enter total marks : ");
		scanf("%d",&s[i].tot);
	}
	getch();
	clrscr();
	printf("\n\tResult \n");
	printf("\n\t Name\t\t\tExam no\t Marks \t Total ");
	for(i=0;i<3;i++)
		printf("\n\n\n\t %-17s%12d\t%4d\t%5d ",s[i].nm,s[i].eno,s[i].sub,s[i].tot);
	getch();
}


