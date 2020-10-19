#include<stdio.h>
#define NO 5
#include<conio.h>
void main()
{
	struct
	{
		int no;
		char nam[20];
		int sub[3];
		int tot;
		int per;
	}s[2];
	int i,j;
	clrscr();
	for(i=0;i<NO;i++)
	{
		printf("\n\t Enter no : ");
		scanf("%d",&s[i].no);
		printf("\t Enetr name  :");
		flushall();
		gets(s[i].nam);
		for(j=0;j<=2;j++)
		{
			printf("\t Enter marks for subject no %d ",j);
			scanf("%d",&s[i].sub[j]);
		}
		printf("\t Enter total marks : ");
		scanf("%d",&s[i].tot);
		printf("\t Enter persentage : ");
		scanf("%d",&s[i].per);
	}
	getch();
	clrscr();
	gotoxy(2,7);
	printf("\n------------------------------------------------------------------------------- ");
	printf("\n   NO  NAME\t\t\tSUB1  SUB2  SUB3  TOTAL\tPERSANTAGE");
	printf("\n--------------------------------------------------------------------------------");

	for(i=0;i<NO;i++)
		printf("\n   %-4d%-25s%-6d%-6d%-6d%-12d%-6d",s[i].no,s[i].nam,s[i].sub[0],s[i].sub[1],s[i].sub[2],s[i].tot,s[i].per);
	printf("\n--------------------------------------------------------------------------------");
	getch();
}


