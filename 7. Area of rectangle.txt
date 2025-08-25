#include<iostream>
using namespace std;

class A 
{
    int l,b;
    public:
    void accept();
    void display();
};

void A::accept()
{
    cout<<"enter length and breadth : ";
    cin>>l>>b;
}
void A::display()
{
    cout<<"Area of rectangle is "<<l*b<<endl;
}

int main()
{
    A obj;
    obj.accept();
    obj.display();
}