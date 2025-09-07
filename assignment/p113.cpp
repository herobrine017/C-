//friend function
#include <iostream>  
using namespace std;  

class A
{
	int pvt;
	public:
	void accept();
    friend void display(A&); // friend func declaration , it is global friend function
};

void A::accept()
{
    cout<<"enter value of private variable : ";
    cin>>pvt;
}

void display(A& obj)  //friend fuc , can access prot and pvt , also no need to write scope resolution operator(::)
{
        cout<<"private variable is "<<obj.pvt;
}

int main()
{
    A obj1;
    obj1.accept();
    display(obj1);
}