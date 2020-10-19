
#include <stdio.h>
void main()
{
	FILE *fp;
	char buff[80];
	clrscr();

	/*Open a file*/
	fp = fopen("f1.txt", "r");

fgets(buff, sizeof(buff), fp);
printf("%s", buff);

	while(fgets(buff, sizeof(buff), fp) != NULL)
	{
		printf("%s", buff);
	}
	/*Close the file*/
	fclose(fp);

	getch();
}

/*notes
2.12.5.2 fgets

Declaration:

char *fgets(char *str, int n, FILE *stream);
Reads a line from the specified stream and stores it into the string pointed to by str. It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first. The newline character is copied to the string. A null character is appended to the end of the string.
On success a pointer to the string is returned. On error a null pointer is returned. If the end-of-file occurs before any characters have been read, the string remains unchanged.
*/

