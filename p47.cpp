//public mode of inheritance
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

    int get_pvt()
    {
        return pvt;
    }
};

class Child : public Parent
{
    public:
    int get_prot()
    {
        return prot;
    }
};
int main()
{
    Child obj;
    cout<<obj.get_pvt()<<" ";
    cout<<obj.get_prot()<<" ";
    cout<<obj.pub<<" ";
}