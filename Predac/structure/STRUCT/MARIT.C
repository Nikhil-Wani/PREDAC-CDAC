#include<stdio.h>
#include<e:udf\center.c>
#include<conio.h>
#include<string.h>
void main()
{
	struct
	{
		int eno;
		char nm[25];
		int tot;
		int per;
	}s[3],t;
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\tEnter exam no     : ");
		scanf("%d",&s[i].eno);
		printf("\tEnter name        : ");
		fflush(stdin);
		gets(s[i].nm);
		printf("\tEnter total marks : ");
		scanf("%d",&s[i].tot);
		printf("\tEnter persentage  : ");
		scanf("%d",&s[i].per);
	}
	clrscr();
	for(i=0;i<3;i++)
	{	printf("\n\n\t Result of student no %d ......",i+1);
		printf("\n\tExam No.    : %d ",s[i].eno);
		printf("\n\tName        : %s",s[i].nm);
		printf("\n\tTotal marks : %d ",s[i].tot);
		printf("\n\tPersentage  : %d ",s[i].per);
	}
	getch();
	clrscr();
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
			if(s[i].tot<s[j].tot)
			{
				t=s[j];
				s[j] =s[i];
				s[i]=t;
			}
	center ("-: MARIT LIST OF ALL STUDENTS :-",2);
	for(i=0;i<3;i++)
	{
		printf("\n\n\tExam No.    : %d ",s[i].eno);
		printf("\n\tName        : %s",s[i].nm);
		printf("\n\tTotal marks : %d ",s[i].tot);
		printf("\n\tPersentage  : %d ",s[i].per);
	}

	getch();
}


