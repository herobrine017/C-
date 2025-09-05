//Dynamic initialization of object using dynamic constructor
#include<iostream>
using namespace std;
class A
{
    int* ptr;
    public:
    A()
    {
        ptr = new int;//Dynamically initializing ptr using new
        *ptr=10;//or cin>>*ptr;
    }
    void display()
    {
        cout<<"value is "<<*ptr;
    }
};

int main()
{
    A obj;
    obj.display();
}