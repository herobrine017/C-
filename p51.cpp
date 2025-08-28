//even though you created child class object , but the parent class constructor will be called 
//first then child class constructor will be called.
//so, invoking is upward but intializing is downward.
//in short , constructor execution is Parent->Child.
#include<iostream>
using namespace std;

class Parent
{
    private:
    int pvt;
    protected:
    int prot;
    public:
    int pub;

    Parent()
    {
        cout<<" in Parent class constructor "<<endl;
        pvt=1;
        prot=2;
        pub=3;
    }

    int get_pvt()
    {
        return pvt;
    }
};

class Child : public Parent
{
    public:
    Child()
    {
        cout<<" in child class constructor "<<endl;
        prot=12;
        pub=13;
    }
    int get_prot()
    {
        return prot;
    }
};
int main()
{
    Child obj;
}