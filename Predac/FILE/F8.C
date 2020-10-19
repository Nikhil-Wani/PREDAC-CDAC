#include <stdio.h>
typedef struct book
{
	char name[20];
	int pages;
}BOOK;

void main()
{
	FILE *fp;
	BOOK b;
	int i;
	clrscr();

	fp=fopen("f6.txt", "r");

	while( fscanf(fp, "%s%d",b.name, &b.pages) != EOF )
	{
		printf("\n%-20s%-5d", b.name, b.pages);
	}
	fclose(fp);
	getch();
}