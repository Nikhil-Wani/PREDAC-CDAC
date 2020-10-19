#include <stdio.h>
typedef struct book
{
	char name[20];
	int pages;
}BOOK;

void main()
{
	FILE *fp;
	BOOK arr[3];
	int i;
	clrscr();

	fp=fopen("f6.txt", "w");

	for(i=0; i<3; i++)
	{
		scanf("%s%d",arr[i].name, &arr[i].pages);
	}
	for(i=0; i<3; i++)
	{                  

		fprintf(fp, "\n%-20s%-5d", arr[i].name, arr[i].pages);
	}

	fclose(fp);
	getch();
}