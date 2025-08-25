#include<iostream>
using namespace std;

class A
{
    public:
    int add1(int,int);
    char add2(char,char);
    int add3(int,int);
};

int A::add1(int a,int b)
{
    return a+b;
}

char A::add2(char a,char b)
{
    return a+b;
}

int A::add3(int a,int b)
{
    return a&b;
}
int main()
{
    int a=10,b=20;
    char c='A',d='A';
    A obj;
    cout<<"Sumation of numbers is "<<obj.add1(a,b)<<endl;
    cout<<"Sumation is character is "<<obj.add2(c,d)<<endl;
    cout<<"Sumation is binary  is "<<obj.add3(a,b)<<endl;
}