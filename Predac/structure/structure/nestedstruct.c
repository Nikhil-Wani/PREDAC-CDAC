#include<stdio.h>
struct  add
{ int phone[15];
 char city[25];
  int pin;
};
struct  emp
{ char name[20];
 struct  add  a;
 };
void main()
{ struct  emp e;
 printf("enter name phone city and pin");
 scanf("%s %d %s %d",e.name,&e.a.phone,e.a.city,&e.a.pin);
}
