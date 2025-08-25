#include<iostream>
using namespace std;

class A
{
    public:
    void Swap1(int,int);
    void Swap2(int*,int*);
    void Swap3(int&,int&);
};

void A::Swap1(int p,int q)
{
    int temp=p;
    p=q;
    q=temp;
    cout<<"In Swap method : "<<endl;
    cout<<"a : "<<p<<" b: "<<q<<endl;
}

void A::Swap2(int* p,int* q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
    cout<<"In Swap method : "<<endl;
    cout<<"a : "<<*p<<" b: "<<*q<<endl;
}

void A::Swap3(int &p,int &q)
{
    int temp=p;
    p=q;
    q=temp;
    cout<<"In Swap method : "<<endl;
    cout<<"a : "<<p<<" b: "<<q<<endl;
}
int main()
{
    int a=10,b=20;
    A obj;
    cout<<"----------------pass by value---------------"<<endl;
    cout<<"Before Swapping : "<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;
    obj.Swap1(a,b);
    cout<<"After swapping : "<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;

    cout<<"----------------pass by address---------------"<<endl;
    a=10,b=20;
    cout<<"Before Swapping : "<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;
    obj.Swap2(&a,&b);
    cout<<"After swapping : "<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;

    cout<<"----------------pass by Reference---------------"<<endl;
    a=10,b=20;
    cout<<"Before Swapping : "<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;
    obj.Swap3(a,b);
    cout<<"After swapping : "<<endl;
    cout<<"a : "<<a<<" b: "<<b<<endl;
}