#include <iostream>
using namespace std;

int main()
{
    int a[5],b[5],c[5];
    cout<<"enter elements of 1st array : ";
    for(int i=0;i<5;i++)
    {
        cin>>*(a+i);
    }
    cout<<"enter elements of 2nd array : ";
    for(int i=0;i<5;i++)
    {
        cin>>*(b+i);
    }
    for(int i=0;i<5;i++)
    {
        *(c+i)=*(a+i)+*(b+i);
    }
    cout<<"Sumation of 2 array is : ";
    for(int i=0;i<5;i++)
    {
        cout<<*(c+i)<<" ";
    }
}