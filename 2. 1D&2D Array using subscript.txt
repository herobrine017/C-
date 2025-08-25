#include<iostream>
using namespace std;

int main()
{
    int a1[5];
    int a2[3][3];
    cout<<"enter 1D Array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a1[i];
    }
    cout<<"1D array : ";
    for(int i=0;i<5;i++)
    {
        cout<<a1[i]<<" ";
    }
    cout<<"\nenter 2D array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a2[i][j];
        }
    }
    cout <<"2D array: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a2[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}