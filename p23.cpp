//wap to copy elements of one array into another array
#include<iostream>
using namespace std;

int main()
{
    int a1[10],a2[20];
    cout<<"enter elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>*(a1+i);
        *(a2+i)=*(a1+i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<*(a2+i);
    }
}