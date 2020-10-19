#include<iostream>
using namespace std;
class base
{
private:
		int num1;
public:
	void disp1()
	{
		cout<<num1<<endl;
	}
	base()
	{
		cout<<"base no-arg"<<endl;
	}
	~base()
	{
		cout<<"base destr"<<endl;
	}
};
class sub:base
{
private:
	int num2;
public:
	sub()
	{
		cout<<"sub no-arg"<<endl;
	}
	void disp2()
	{
		disp1();
		cout<<num2<<endl;
	}
	~sub()
	{
		cout<<"sub destr"<<endl;
	}
};

int main()
{
	sub s;
	s.disp2();
	cout<<"Size of s is\t"<<sizeof(s)<<endl;
	return 0;
}










