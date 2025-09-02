//No polymorphism as parent class ptr is pointing to parent class object
//similar for child class , so here we can use that , but there is no polymorphism

#include<iostream>
using namespace std;

class Parent
{
    public:
    void add(int a,int b)
    {
        cout<<"in Parent class , Addition is "<<a+b<<endl;
    }
};

class Child : public Parent
{
    public:
    void add(int a,int b)
    {
        cout<<"in Child class , Addition is "<<a+b<<endl;
    }
};
int main()
{
    Parent* ptr = new Parent();
    ptr->add(10,20);
    Child* ptr2 = new Child();
    ptr2->add(10,20);
    delete ptr;
    delete ptr2;
}