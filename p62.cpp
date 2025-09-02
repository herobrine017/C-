//runtime polymorphism / late binding / dynamic binding
#include<iostream>
using namespace std;

class Parent
{
    public:
    virtual void add(int a,int b)
    {
        cout<<"in Parent class , Addition is "<<a+b<<endl;
    }
};

class Child : public Parent
{
    public:
    void add(int a,int b) override
    {
        cout<<"in Child class , Addition is "<<a+b<<endl;
    }
};
int main()
{
    Parent* ptr = new Child();
    ptr->add(10,20);
    delete ptr;
}