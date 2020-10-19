#include<iostream>
using namespace std;
class MyClass
{
	private:
		int num;
	public:
		void setNum(int num)
		{
			this->num=num;
		}
		int getNum()
		{
			return num;
		}
friend void fun();
};
void fun()
{
	// how will you access num here ?
	MyClass m1;
	/*m1.setNum(100);
	cout<<m1.getNum()<<endl;*/
	m1.num=100;
	cout<<m1.num<<endl;
}
int main()
{
	fun();
}

