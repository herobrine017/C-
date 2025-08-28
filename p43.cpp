//WAP to display marks of n students using memory allocation
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    float* ptr=new float[n];
    cout<<"enter marks of students : ";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<(i+1)<<" marks are : "<<*(ptr+i)<<endl;
    }

}