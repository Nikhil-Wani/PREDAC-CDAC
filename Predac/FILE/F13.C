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
	BOOK b;
	int i, cnt;
	long offset=sizeof(BOOK), pos;
	clrscr();

	fp=fopen("f9.dat", "rb");

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos); //0

	fseek(fp, 2*offset, SEEK_SET);

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos);//48

	fread(&b, sizeof(BOOK), 1, fp);

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos); //72

	printf("\n%-20s%-5d", b.name, b.pages);

	fseek(fp, -2*offset, SEEK_END);

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos);//24

	fread(&b, sizeof(BOOK), 1, fp);

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos); //48

	printf("\n%-20s%-5d", b.name, b.pages);

	fseek(fp, -2*offset, SEEK_CUR);

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos); 

	fread(&b, sizeof(BOOK), 1, fp);

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos);

	printf("\n%-20s%-5d", b.name, b.pages);

	rewind(fp);

	pos=ftell(fp);
	printf("\nCurrent Position = %ld", pos);

	fclose(fp);
	getch();
}













