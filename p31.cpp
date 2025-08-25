#include<iostream>
using namespace std;

class demo
{
    public:
    demo()
    {
        cout<<"in default constructor"<<endl;
    };
    demo(int a=1,int b=1)
    {
        cout<<a+b<<endl;
    };
};
int main()
{
    demo d1();
    demo d2(2);
    demo d3(2,2);
}