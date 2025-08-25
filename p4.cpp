#include<iostream>
using namespace std;

class Complex
{
    int Real,Img;
    public: 
    void accept();
    void display();
    void setReal(int);
    int getReal();
};

void Complex::accept()
{
    cout<<"enter real and imaginary number: "<<endl;
    cin>>Real>>Img;
}

void Complex::display()
{
    cout<<Real<<"+"<<Img<<"i"<<endl;
}

void Complex::setReal(int r)
{
    Real=r;
}

int Complex::getReal()
{
    return Real;
}
int main()
{
    Complex c1;
    c1.accept();
    c1.display();
    c1.setReal(5);
    c1.display();
    cout<<c1.getReal();
    return 0;
}