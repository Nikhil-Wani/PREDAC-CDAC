#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
if(argc<2) {

printf("You forgot to type your name.\n");
exit(1);
}
printf("\n %d", argc);
printf("\n%s", argv[0]);//name of file
printf("\n %s", argv[1]);// value enetered by user

getche();
return 0;
}