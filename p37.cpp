#include<iostream>
using namespace std;
void fibo(int n)
{
    if(n==1)
    {
        cout<<"0";
        return;
    }
    if(n==2)
    {
        cout<<"0 1";
        return;
    }
    cout<<"0 1 ";
    int a=0;
    int b=1;
    for(int i=0;i<n;i++)
    {
    int next=a+b;
    cout<<next<<" ";
    a=b;
    b=next;
    }
}
int main()
{
    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    fibo(n);
}