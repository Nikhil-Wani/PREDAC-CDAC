#include<stdio.h>
void main()
{ int m=4,n=6;
 int lcm;
 int temp,reminder;
 if(m<n)
 {
 temp=m;
 m=n;
 n=temp;
 }
 while(1)
 {
 reminder=m%n;
 if(reminder==0)
 {printf("hcf=%d",n);
  break;}

 else
  {m=n;
  n=reminder;
  }

}

lcm=m*n/n;
printf("lcm=%d",lcm);
}





___________________________________________________________________
#include<stdio.h>

void hcf(int m,int n)
{
int r;
r=m%n;
 if(r==0)
	 printf("%d",n);
 else

 hcf(n,r);


getche();


}


void main()
{ int m=12,n=21;
 int lcm;
 int temp,reminder;
 if(m<n)
 {
 temp=m;
 m=n;
 n=temp;
 }
 hcf(m,n);
}
