#include <stdio.h>
typedef struct book
{char name[20];
	int pages;
}BOOK;
void main()
{	FILE *fp;
	BOOK b;
	int i, cnt;
	
	fp=fopen("f9.dat", "rb");
	while(fread(&b, sizeof(BOOK), 1, fp) == 1)
	{	printf("\n%-20s%-5d", b.name, b.pages);
	}
	fclose(fp);
	getch();}