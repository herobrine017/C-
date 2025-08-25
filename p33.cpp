#include<iostream>
using namespace std;

class Complex
{
    static int cnt;
    public:
    int real,img;
        void show();
        Complex();
        Complex(int,int);
        static int getcnt();
};
int Complex::cnt;
void Complex::show()
{
    cout<<real<<"+"<<img<<"i"<<" count is "<<cnt<<endl;
}
Complex::Complex()
{
    cout<<"in default"<<endl;
    real=10;
    img=10;
    cnt++;
}

Complex::Complex(int r,int i)
{
    cout<<"in parameterized"<<endl;
    real=r;
    img=i;
    cnt++;
}

int Complex::getcnt()
{
    return cnt;
}
int main()
{
    Complex c1;
    c1.show();
    Complex c2;
    c2.show();
    Complex c3(2,3);
    c3.show();
    cout<<"Number of objects created : "<<Complex::getcnt(); // classname::getcnt(); 
}