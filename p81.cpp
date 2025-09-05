//Default Copy constructor or Shallow copy
//describes problem of dangling pointer 
// tries to call destructor 2 times for single memory 
#include <iostream>
using namespace std;

class A
{
    int* ptr;
    public:
    A(int value)
    {
        ptr = new int(value);
        cout << "Constructor: *ptr = " << *ptr << endl;
    }
    ~A()
    {
        cout << "Destructor: *ptr = " << *ptr << endl;
        delete ptr;
    }
    void show()
    {
        cout<<"*ptr = "<<*ptr<<endl;
    }
};

int main()
{
    A obj1(10);
    A obj2 = obj1;//Shallow Copy or default copy constructor
    obj1.show();//10
    obj2.show();//expected : 10 , actual : garbage value
}