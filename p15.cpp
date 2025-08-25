#include <iostream>
using namespace std;
int main()
{
    int n=111,sum=0;
    while(n!=0)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"Sum is : "<<sum;
}
