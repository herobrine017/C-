//use of user defined destructor
//user defined destructor is used to delete dynamically allocated memory
//to avoid memory leakage
//to delete pointer
#include <iostream>
using namespace std;
class A
{
    int* ptr;
	public:
    A()
	{
		ptr = new int(10);
        cout<<"constructor called. ptr = "<<*ptr<<endl;
	}
	~A()
	{
        cout<<"destructor called"<<endl;
		if(ptr)
		{
			delete ptr;
			ptr=NULL;
		}
	}
};
int main()
{
    A obj;
}