#include <iostream>
using namespace std;

int prime(int );
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter number : "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(prime(i))
        {
            cout<<i<<" ";
        }
    }
}