#include<stdio.h>
#include<conio.h>
#include<string.h>
struct result
{

	int eno;
	char nm[25];
	char sex;
	int tot;
	int per;
}s[3],t;
void sort(struct result *,int );
void main()
{
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\tEnter detail for student no %d ",i+1);
		printf("\n\t Enter exam no :");
		scanf("%d",&s[i].eno);
		printf("\t Enter name : ");
		flushall();
		gets(s[i].nm);
		printf("\t Enter sex (F/M): ");
		flushall();
		scanf("%c",&s[i].sex);
		printf("\t Enter total marks : ");
		scanf("%d",&s[i].tot);
		printf("\tEnter persentage : ");
		scanf("%d",&s[i].per);
	}
	getch();
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\n\t Exam no          : %d ",s[i].eno);
		printf("\n\t Name             : %s ",s[i].nm);
		printf("\n\t Sex (F/M)        : %c",s[i].sex);
		printf("\n\t Total marks      : %d ",s[i].tot);
		printf("\n\t Enter persentage : %d",s[i].per);
	}
	getch();
	clrscr();
	sort(s,3);
	printf("\n\t Sorted result (BASED ON TOTAL MARKS)  ................\n");
	for(i=0;i<3;i++)
	{
		printf("\n\t Exam no          : %d ",s[i].eno);
		printf("\n\t Name             : %s ",s[i].nm);
		printf("\n\t Sex (F/M)        : %c",s[i].sex);
		printf("\n\t Total marks      : %d ",s[i].tot);
		printf("\n\t Enter persentage : %d \n",s[i].per);
	}
	getch();
}
void sort(struct result *add,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(add[i].tot<add[j].tot)
			{
				t=s[j];
				s[j]=s[i];
				s[i]=t;
			}
		}
	}
}


