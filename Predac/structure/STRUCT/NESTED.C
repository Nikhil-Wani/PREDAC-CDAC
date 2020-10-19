#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	struct date
	{
		int dd,mm,yy;
	};
	struct mix
	{
		int eno;
		char name[25];
		struct date dob;
		int tot;
	}s[3];
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\t Enter exam no : ");
		scanf("%d",&s[i].eno);
		printf("\n\t Enter name : ");
		flushall();
		gets(s[i].name);
		printf("\n\t Enter date of birth(dd/mm/yyyy) : ");
		scanf("%d %d %d",&s[i].dob.dd,&s[i].dob.mm,&s[i].dob.yy);
		printf("\n\t Enter total marks : ");
		scanf("%d",&s[i].tot);
	}
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\t Exam no                   : %d ",s[i].eno);
		printf("\n\t Name        	          : %s ",s[i].name);
		printf("\n\t Date of birth(dd/mm/yyyy) : %d/%d/%d ",s[i].dob);
		printf("\n\t Enter total marks         : %d ",s[i].tot);
	}
	getch();
}


