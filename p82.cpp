//Deep copy or user defined copy Constructor
//to solve dangling pointer problem
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
    A(const A& obj)
    {
        ptr = new int(*obj.ptr);
        cout << "Copy Constructor: *ptr = " << *ptr << endl;
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
    A obj2 = obj1;
    obj1.show();
    obj2.show();
}