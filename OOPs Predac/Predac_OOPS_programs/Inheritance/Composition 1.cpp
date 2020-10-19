#include<iostream.h>
class engine
{
private:
//status denotes whether engine is ON or OFF
//width specifies one dimension of the engine
    int status;
    int width;
public:
engine(int wd)
{
        status=0;
        width=wd;
        cout<<endl<<"Engine created with width:\t"<<width<<endl;
}
~engine( )
{
        cout<<endl<<"Engine destroyed"<<endl;
}
void start( )
{
        cout<<endl<<"Starting the engine"<<endl;
        status=1;
}
};
class car
{
private:
    engine honda;
    int speed;

public:
car( ):honda(20)
{
	cout<<"Car created "<<endl;
}
~car( )
{
        cout<<endl<<"Car destroyed"<<endl;
}
void start( )
{
        cout<<endl<<"Starting the car"<<endl;
        honda.start( );
}
}; 
int main( )
{
car mycar;
mycar.start( );
return 0;
}












