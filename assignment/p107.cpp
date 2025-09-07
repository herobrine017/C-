//template 1) function template 
//typecasting
#include <iostream>  
using namespace std;  

template <typename T>

T fun(T a,T b)
{
    return a+b;
}

int main()
{
    cout<<fun(10,20)<<endl;

    cout<<fun(10.2,20.5)<<endl;

    cout<<fun<double>(10,10.5)<<endl;//typecasting 10 will be 10.0
}