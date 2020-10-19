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
	int i;
		fp=fopen("f6.txt", "r");
	for(i=0; i<3; i++)
	{
		fscanf(fp, "%s %d",arr[i].name, &arr[i].pages);
	}
	for(i=0; i<3; i++)
	{
		printf("\n%-20s%-5d", arr[i].name, arr[i].pages);
	}

	fclose(fp);
	getch();
}