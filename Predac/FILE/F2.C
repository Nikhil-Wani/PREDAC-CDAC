#include <stdio.h>
void main()
{	FILE *fp;
	char ch;
	
	/*Open a file 
W- if file is exist it will over write if no file with this name it will create it */	fp = fopen("f2.txt", "w");
	/*fputc fn put a char in file ctrl z for eof*/
	while( (ch=getchar()) != EOF)
	{
		fputc(ch, fp);
	}

	/*Close the file*/
	fclose(fp);

	getch();
}