#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value of n : "<<endl;
    cin>>n;
    int* ptr=new int[n];//also valid int* ptr=new int(n); but not sure
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    cout<<" elements are ";
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete []ptr;
}