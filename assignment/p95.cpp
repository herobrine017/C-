//inline function
#include <iostream>  
using namespace std;

inline int Square(int x)
{
    return x*x;
}

int main()
{
    int answer = Square(5);//function call Sqaure(5) gets replaced by with x*x/5*5;
    cout<<answer;
}