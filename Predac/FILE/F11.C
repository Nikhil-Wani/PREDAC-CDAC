#include <stdio.h>
#include <conio.h>

typedef struct book
{
	char name[20];
	int pages;
}BOOK;

void main()
{
	FILE *fp;
	BOOK arr[3];
	int i, cnt;
	clrscr();

	fp=fopen("f9.dat", "rb");

	cnt=fread(arr, sizeof(BOOK), 3, fp);
	printf("\n\n%d Records are read successfully\n\n", cnt);

	for(i=0; i<3; i++)
	{
		printf("\n%-20s%-5d", arr[i].name, arr[i].pages);
	}

	fclose(fp);
	getch();
}