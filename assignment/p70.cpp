//Order of execution of constructors
#include<iostream>
using namespace std;
 
class A
{
	int a;
public:
  A()  { cout << "A's constructor called" << endl; }
  A(int p) 
{
    cout << "A's para constructor called" << endl;
}
};
 
class B
{
	int b;
public:
  B()  { cout << "B's constructor called" << endl; }
  B(int q)
  { 
  		cout << "B's para constructor called" << endl;
  }
};
 
class C: public B, public A  // Note the order
{
public:
  C(int p,int q):A(p),B()
    { 
	cout << "C's paraconstructor called" << endl; 
	}
};
// Execution Order of Constructors in C++

// When an object of a derived class is created, base class constructors are called first.

// Order of base class constructor calls = order of inheritance, not the order in the initializer list.

// After all base class constructors are done, the derived class constructor body executes.

// Here:

// class C: public B, public A


// So, constructor calls happen in this order:

// B() → because B is the first base class

// A(p) → because A is the second base class

// C(int p,int q) body
 
int main()
{
    C c(10,20);
    return 0;
}
