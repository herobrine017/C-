//use of virtual for desturctors . when we do "delete ptr" then only
//parent class destructor is called as ptr is of parent class.
//to resolve this , we use virtual keyword in front of destructor to
//call derived class destructor too.
#include<iostream>
using namespace std;
class A
{
	public :
    A()
	{
		cout<<"In A's Constructor"<<endl;
	}
	virtual ~A()
	{
		cout<<"In A's Destructor"<<endl;
	}
};
class B :public A
{
	public :
    B()
	{
		cout<<"In B's Constructor"<<endl;
	}
	~B()
	{
		cout<<"In B's Destructor"<<endl;
	}
};
int main()
{
    A* ptr=new B();
    delete ptr;
}