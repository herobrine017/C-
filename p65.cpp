#include<iostream>
using namespace std;
class A
{
int x;
	//without virtual function
};
class B
{
int x;
	//with virtual function
};
int main()
{
	A a;
	B b;
	cout<<"size of object a is "<<sizeof(a);
	cout<<"size of object a is "<<sizeof(b);
}