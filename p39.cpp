#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void accept()
    {
        cin>>this->a;
    }
    void show()
    {
        cout<<" value of a is "<<a;
    }
    A add(A &b1)
    {
        A obj3;
        obj3.a = this->a + b1.a; //this->a is address of obj1 thats why 10 and b1.a is obj3.
        return obj3;
    }
};
int main()
{
    A obj1,obj2;
    obj1.accept();
    obj2.accept();
    A obj4=obj1.add(obj2);
    obj4.show();
}