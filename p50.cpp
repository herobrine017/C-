//single inheritance
#include<iostream>
using namespace std;

class A
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

class B : public A
{
    public:
    int get_prot()
    {
        return prot;
    }
    void print()
    {
        //cout<<pvt<<" "; Not accessible
        cout<<prot<<" ";
        cout<<pub<<" ";
    }
};
int main()
{
    B obj_b;
    obj_b.print();

    //cout<<pvt<<" "; Not accessible
    //cout<<obj.prot<<" "; not accessible
    cout<<obj_b.pub<<" ";

    obj_b.get_prot();

    A obj_a;
    cout<<obj_a.get_pvt()<<" ";
}