#include<iostream.h>
class Grandparent
{
public:
	void Granddisp()
	{
		cout<<endl<<"in Granddisp fun\n";
	}
	Grandparent()
	{
		cout<<endl<<"in Grandparent def.const\n";
	}
	~Grandparent()
	{
		cout<<endl<<"in Grandparent dest\n";
	}
};
class parent1:public Grandparent
{
public:
	void parent1disp()
	{
		cout<<endl<<"in parent1disp\n";
	}
	parent1()
	{
		cout<<endl<<"in parent1 def.const\n";
	}
	~parent1()
	{
		cout<<endl<<"in parent1 dest\n";
	}
};
class parent2:public Grandparent
{
public:
	void parent2disp()
	{
		cout<<endl<<"in parent2disp\n";
	}
	parent2()
	{
		cout<<endl<<"in parent2 def const\n";
	}
	~parent2()
	{
		cout<<endl<<"in parent2 dest\n";
	}
};
class child:public parent1,public parent2
{
public:
	void childdisp()
	{
		cout<<endl<<"in child disp\n";
	}
	child()
	{
		cout<<endl<<"in child def.const\n";
	}
	~child()
	{
		cout<<endl<<"in child dest\n";
	}
};
void main()
{
	child c;
	c.parent1disp();
	c.parent2disp();
	c.childdisp();
//	c.Granddisp(); //Error
}












