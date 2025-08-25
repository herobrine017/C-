#include<iostream>
using namespace std;

class Test 
{
    int a,b;
    public:
    void show(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    Test t1;
    t1.show(10,20);
    t1.display();
    
}