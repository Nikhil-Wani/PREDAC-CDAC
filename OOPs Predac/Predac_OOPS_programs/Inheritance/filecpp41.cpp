#include<iostream.h>
class base
{
private:
	int num1;
public:
	void disp()
	{
		cout<<endl<<"in disp of base\t"<<num1<<endl;
	}
};
class sub1:public base
{
private:
	int num2;
public:
	void print()
	{
		cout<<endl<<"in print of sub\t"<<num2<<endl;
	}
};
void main()
{
	sub1 s1;
	s1.print();
	s1.disp(); 
}