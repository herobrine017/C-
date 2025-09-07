//template 1) function template 
//overloading function template
#include <iostream>  
using namespace std;  

template <typename T>
T fun(T a,T b)
{
    return a+b;
}

template <typename T,typename U>
U fun(T a,U b)// auto fun (T a,U b) , can use auto keyword to detect the return type
{
    return a+b;
}

template <typename V>
V fun(V a)
{
    return a+0;
}

int main()
{
    cout<<fun(10,20)<<endl;

    cout<<fun(10,10.5)<<endl;

    cout<<fun(10)<<endl;
}