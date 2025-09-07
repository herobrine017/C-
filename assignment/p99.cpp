//Hybrid inheritance problem in constructor
//here Construtor A is executed 2 times
// 1st from B to A
// 2nd from C to A
//so we need virtual class B and virtual class C
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A constructor\n"; }
};

class B : public A {
public:
    B() { cout << "B constructor\n"; }
};

class C : public A {
public:
    C() { cout << "C constructor\n"; }
};

class D : public B, public C {
public:
    D() { cout << "D constructor\n"; }
};

// A constructor  From B to A
// B constructor
// A constructor  From c to A
// C constructor
// D constructor
int main() {
    D obj;
    return 0;
}
