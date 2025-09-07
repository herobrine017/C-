//friend function accessing variables of 2 class
#include <iostream>  
using namespace std;  
class B;//forward declaraction
class A
{
	int a;
	public:
    void accept()
    {
        cout<<"enter value of private variable of a: ";
        cin>>a;
    }
    friend void big(A& ,B&); // for this , we need forward declaration. because compiler is yet to see class B
};
 class B
{
	int b;
	public:
	void accept()
    {
        cout<<"enter value of private variable of b: ";
        cin>>b;
    }
    friend void big(A& , B&);
};

void big(A& obj_a ,B& obj_b) // friend function accessing private variable of both A and B.
{
    if(obj_a.a > obj_b.b)
    {
        cout<<obj_a.a<<" is greater that is a";
    }
    else if(obj_b.b>obj_a.a)
    {
        cout<<obj_b.b<<" is greater that is b";
    }
    else
    {
        cout<<"both are equal ";
    }
}

int main()
{
	A obj1;
    obj1.accept();
    B obj2;
    obj2.accept();

    big(obj1 , obj2);
}
