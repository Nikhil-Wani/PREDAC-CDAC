#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
		int rollno;
		char name[20];
		int age;
		char qualification[30];
public:
	// constructor overloading
	Student(int rollno,char *name,int age,char *qualification)
	{
		this->rollno=rollno;
		strcpy(this->name,name);
		this->age=age;
		strcpy(this->qualification,qualification);
	}
	Student()
	{

	}	
	int getRollno()
	{
		return rollno;
	}
	void setRollno(int rollno)
	{
		this->rollno=rollno;
	}
	char* getName()
	{
		return name;
	}
	void setName(char *name)
	{
		strcpy(this->name,name);
	}
	int getAge()
	{
		return age;
	}
	void setAge(int age)
	{
		this->age=age;
	}
	char* getQualification()
	{
		return qualification;
	}
	void setQualification(char* qualification)
	{
		strcpy(this->qualification,qualification);
	}
};
int main()
{
	Student s1;
	
	s1.setRollno(1);
	s1.setName("Amit");
	s1.setAge(21);
	s1.setQualification("be");

	cout<<s1.getRollno()<<"\t"<<s1.getName()<<"\t"<<s1.getAge()<<"\t"<<s1.getQualification()<<endl;


	Student s2;
	s2.setRollno(2);
	s2.setName("Vishal");
	s2.setAge(23);
	s2.setQualification("btech");

	cout<<s2.getRollno()<<"\t"<<s2.getName()<<"\t"<<s2.getAge()<<"\t"<<s2.getQualification()<<endl;
	Student s3(3,"Suresh",22,"be");
	

	s3.setQualification("me");
	cout<<s3.getRollno()<<"\t"<<s3.getName()<<"\t"<<s3.getAge()<<"\t"<<s3.getQualification()<<endl;
	return 0;
}