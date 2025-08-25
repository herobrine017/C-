#include<iostream>
using namespace std;

class A
{
    public:
    void power(int,int);
};

void A::power(int a,int b)
{
    int power=1;
    for(int i=0;i<b;i++)
    {
        power=power*a;
    }
    cout<<"Power of a number is : "<<power<<endl;
}
int main()
{
    A obj;
    obj.power(2,3);
}