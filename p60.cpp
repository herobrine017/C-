//compile time polymorphism / early binding / static binding
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

class Child
{
    public:
    void add(int a,int b)
    {
        cout<<"in Child class , Addition is "<<a+b<<endl;
    }
};
int main()
{
    Parent p;
    p.add(10,20);//decision to call which function at compile time
    Child c;
    c.add(10,20);
}