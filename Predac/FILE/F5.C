#include <string.h>
void main()
{
	FILE *fp, *fp2;
	char buff[80];
	clrscr();

	/*Open a file*/
	fp = fopen("f1.txt", "r");
	if(fp==NULL)
	{
		printf("Source file connot be opened");
		exit(1);
	}
	fp2 = fopen("f5.txt", "w");
	if(fp2==NULL)
	{
		printf("Destination file connot be opened");
		fclose(fp);
		exit(1);
	}

	/*read a line from fp*/
	while(fgets(buff, sizeof(buff), fp) != NULL)
	{
		strrev(buff);
		/*write line to fp2*/
		fputs(buff, fp2);
	}

	printf("File copied successfully");

	/*Close the file*/
	fclose(fp);
	fclose(fp2);

	getch();
}