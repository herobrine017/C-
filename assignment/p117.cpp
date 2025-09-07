//Overloading of <<(insersion) and >>(extraction) operator
#include <iostream>
using namespace std;
 
class Complex
{
private:
    int real, img;
public:
    Complex(int r = 0, int i =0)
    {
        real = r;
        img = i;
    }
friend void operator >>(istream &,Complex &);
friend void operator <<(ostream &,const Complex &);
    
};
void operator >>(istream &in,Complex &obj) //insersion operator overloading
{
    cout<<"enter real number : ";
    in >> obj.real;
    cout<<"enter imaginary number : ";
    in >> obj.img;
}

void operator <<(ostream &out,const Complex &obj) ///extraction operator overloading
{
    out << obj.real <<" + "<<obj.img<<"i";
}

int main()
{
    Complex obj1;
    cin >> obj1;//operator(cin,obj1);
    cout << obj1;//operator(cout,obj1);
}