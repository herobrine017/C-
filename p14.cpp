#include <iostream>
using namespace std;
int main()
{
    int n=259,sum=0,original=n;
    while(n!=0)
    {
        int digit=n%10;
        sum= sum+digit*digit*digit;
        n=n/10;
    }
    if(original==sum)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"not an armstrong number";
    }
}
