//Math library functions
//1 sqrt()
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double value;
    value = sqrt(24);
    cout<<value;
    value = sqrt(-15);//return nan
    cout<<value;
}