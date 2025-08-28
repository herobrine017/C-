#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value of n : ";
    cin>>n;
    int* ptr=new int[n];
    cout<<"enter values : ";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);//or ptr[i];
    }
    cout<<"values are : ";
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" ";//or ptr[i];
    }
    
}