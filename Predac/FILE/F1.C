#include <stdio.h>
void main()
{	FILE *fp; //FILE is structure
	char ch;
	
	/*Open a file--set the cursor in the begining and return address of file if file not found then return null*/
	fp = fopen("f1.txt", "r"); //2 parameter string r-read mode

	/*fgetc fn read a char from file*/

	ch=fgetc(fp);
	putchar(ch);
	ch=fgetc(fp);
	putchar(ch);

	while( (ch=fgetc(fp)) != EOF)
	{
		putchar(ch);
	}

	/*Close the file*/
	fclose(fp);

	getch();
}