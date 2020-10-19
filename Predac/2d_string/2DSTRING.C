#include<stdio.h>
#include<malloc.h>
void main()
{
 int i,no,ln;
 char *la;
    printf("enter how many name do u want to add");
     scanf("%d",&no);
   la=(char *)malloc(no*sizeof(int));
 
 for(i=0;i<no;i++)
 {     	printf("enter length of name");
		scanf("%d",&ln);
		la[i]=(char *)malloc((ln+1)*sizeof(char));
		puts("enter name");
		scanf("%s",la[i]);

 }
 for(i=0;i<no;i++)
 printf("%s",la[i]);

}