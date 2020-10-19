#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	struct mix
	{
		int eno;
		char nm[25];
		char sex;
		int tot;
	};
	struct mix s1[4];
	int i;
	clrscr();
	for(i=0;i<4;i++)
	{
		printf("\n\tEnter exam no : ");
		scanf("%d",&s1[i].eno);
		printf("\tEnter name    : ");
		fflush(stdin);
		gets(s1[i].nm);
		printf("\tEnter sex     : ");

		fflush(stdin);
		scanf("%c",&s1[i].sex);
		printf("\tEnter total marks : ");
		scanf("%d",&s1[i].tot);
	}
	for(i=0;i<4;i++)
	{
		printf("\n\n\tExam no     : %d",s1[i].eno);
		printf("\n\tName        : %s",s1[i].nm);
		printf("\n\tSex         : %c",s1[i].sex);
		printf("\n\tTotal marks : %d",s1[i].tot);
	}
	getch();
}






