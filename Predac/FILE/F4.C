#include <stdio.h>
void main()
{
	FILE *fp, *fp2;
	char buff[80];
	clrscr();

	/*Open a file*/
	fp = fopen("f1.txt", "r");
	fp2 = fopen("f4.txt", "w");

	/*read a line from fp*/
	while(fgets(buff, sizeof(buff), fp) != NULL)
	{
		/*write line to fp2*/
		fputs(buff, fp2);
	}

	printf("File copied successfully");

	/*Close the file*/
	fclose(fp);
	fclose(fp2);

	getch();
}