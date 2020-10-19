#include<stdio.h>
struct book
{
char name[30];
char authore[30];
int pageno;
};
void display(struct book);
void main()
{
struct book b1={“let us c”,”kanitkar”, 501};
display(b1);
printf(“\n %s %s %d”,b1.name,b1.authore,b1.pageno);
}
void display(struct book  b)
{
printf(“\n %s %s %d”,b.name,b.authore,b.pageno);
scanf("%s",b.name); (vita)
printf(“\n %s %s %d”,b.name,b.authore,b.pageno);

}
