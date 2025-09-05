//Copy constructor
#include <iostream>
using namespace std;

class A
{
    int value;
    public:
    A(int value)
    {
        this->value=value;
        cout<<"Parameterized constructor called. value = "<<value<<endl;
    }

    A(const A& obj) // copy constructor
    {
        value=obj.value;
        cout<<"Copy constructor called. value = "<<value<<endl;        
    }
};

int main()
{
    A obj1(10);
    A obj2 = obj1;
}