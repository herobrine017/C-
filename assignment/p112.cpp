//friend class 
#include <iostream>
using namespace std;
class A
{
    int pvt;
    protected:
    int prot;
    public:
    int pub;

    A()
    {
        pvt=10;
        prot=20;
        pub=30;
    }
    friend class F; // friend class declaration
};
// Here, class F is declared as a friend inside class Demo. Therefore,
// F is a friend of class Demo. Class F can access the private/PROTECTED members of class Demo.

class F 
{
    public:
    void display(A& obj)
    {
        cout<<"private is "<<obj.pvt<<endl;
        cout<<"protected is "<<obj.prot<<endl;
        cout<<"public is "<<obj.pub<<endl;
    }
};

int main()
{
    A obj1;
    F obj2;
    obj2.display(obj1);
}