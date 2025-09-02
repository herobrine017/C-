//Abstract class or pure virtual function
#include<iostream>
using namespace std;

class Parent
{
    public:
    virtual void add(int a,int b)=0;
};

class Child : public Parent
{
    public:
    void add(int a,int b) override
    {
        cout<<"in child class function , addition is "<<a+b<<endl;
    }
};

int main()
{
    // Child c;
    // c.add(10,20);
    Parent* ptr=new Child();
    ptr->add(10,20);
    delete ptr;
}