/* to remove trailing blanks and tabs */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


void main()
{
FILE *infile,*outfile;
char source[67],target[67],ch;

clrscr();
printf("Enter the sourcefile name:");
gets(source);
infile=fopen(source,"r");
if(infile==NULL)
{
printf("\n the file cannot be opened");
getch();
exit(0);
}
printf("Enter the targetfile name:");
gets(target);
outfile=fopen(target,"w");
if(outfile==NULL)
{
printf("\n the file cannot be opened");
getch();
exit(0);
}

while((ch=fgetc(infile))!=EOF)
{
if(ch==' '||ch=='\n'||ch=='\t');
else
fputc(ch,outfile);
}
printf("done successfuly");
fclose(outfile);
fclose(infile);
getch();
}
