//protected mode of inheritance
#include<iostream>
using namespace std;

class Parent
{
    private:
    int pvt=1;
    protected:
    int prot=2;
    public:
    int pub=3;
};

class Child : protected Parent
{
    public:
    int get_prot()
    {
        return prot;
    }
    int get_pub()
    {
        return pub;
    }
};
int main()
{
    Child obj;
    cout<<" Private cannot be accessed from child obj ";
    cout<<obj.get_prot()<<" ";
    //cout<<obj.get_pub()<<" ";
    cout<<obj.get_prot();
}