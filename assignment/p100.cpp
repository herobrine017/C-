//Hybrid inheritance using virtual base class
//solves diamond problem or ambiguity problem
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A constructor\n"; }
};

class B : virtual public A {
public:
    B() { cout << "B constructor\n"; }
};

class C :virtual public A {
public:
    C() { cout << "C constructor\n"; }
};

class D : public B, public C {
public:
    D() { cout << "D constructor\n"; }
};

// A constructor  From B to A
// B constructor
// C constructor
// D constructor
int main() {
    D obj;
    return 0;
}