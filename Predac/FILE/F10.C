#include <stdio.h>

typedef struct book
{	char name[20];
	int pages;
}BOOK;
void main()
{	FILE *fp;
	BOOK arr[3];
	int i, cnt;
	
	fp=fopen("f10.dat", "wb");

	for(i=0; i<3; i++)
	{
	scanf("%s%d",arr[i].name, &arr[i].pages);
	}

	cnt=fwrite(arr, sizeof(BOOK), 3, fp);

printf("\n\n%d Records are written successfully", cnt);
	fclose(fp);
	getch();
}