#include <iostream>
using namespace std;

class A 
{
    public:
    A() const
    {
        cout<<"default constructor";
    }
};
int main()
{
    A obj;
}
