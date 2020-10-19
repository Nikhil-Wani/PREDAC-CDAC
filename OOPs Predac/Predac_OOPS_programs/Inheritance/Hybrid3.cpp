/* When two or more objects(parent1 and parent2) are derived 
from a common base class (Grandparent) ,you can prevent multiple copies of the base class(Grandparent) from being present in an object (child) derived from those objects(parent1 and parent2) by declaring the base class(Grandparent) as virtual,when it is inherited */
#include<iostream.h>
#pragma pack(1)
class Grandparent
{
//	int num1;
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
class parent1:virtual public Grandparent 
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
class parent2:public  virtual Grandparent
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
	c.Granddisp(); //now there is not error because only one copy of granddisp is available
	
}