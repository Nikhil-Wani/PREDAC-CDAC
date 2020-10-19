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
	

	fp=fopen("f9.dat", "wb");
			    
	for(i=0; i<3; i++)
	{
		scanf("%s%d",arr[i].name, &arr[i].pages);
	}
	for(i=0; i<3; i++)
	{
		fwrite(&arr[i], sizeof(BOOK), 1, fp);
	}

	fclose(fp);
	getch();
}