//hybrid inheritance
//cause diamond problem
#include <iostream>
using namespace std;

class A {
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};

class B : public A
{ };
class C : public A
{ };
class D : public B, public C
{ };

int main() {
    D obj;
    // obj.show(); // Diamond problem . Ambiguity: Compiler confused (two copies of A::show)
    obj.B::show(); // Works
    obj.C::show(); // Works
}
