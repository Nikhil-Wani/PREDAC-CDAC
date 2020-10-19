#include<iostream.h>
class base
{
public:
	void disp()
	{
		cout<<endl<<"in disp of base\n";
	}
};
class sub1:public base
{
public:
	void disp()
	{
		cout<<endl<<"in disp of sub1\n";
	}
};
class sub2:public base
{
public:
	void disp()
	{
		cout<<endl<<"in disp of sub2\n";
	}
};
void main()
{
	base *b=new base;
	sub1 s1;
	sub2 s2;
	b->disp();
	b=&s1; // upcasting
	b->disp();
	b=&s2; // upcasting
	b->disp();
}














