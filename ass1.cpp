#include<iostream>
using namespace std;

int main()
{
    int n=4;
    int m=1;
    for(int i=0;i<9;i++)
    {  
        for(int i=0;i<n;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<m;i++)
        {
            cout<<i;
        }
        for(int i=0;i<n;i++)
        {
            cout<<" ";
        }
        cout<<".\n";
        n--;
        m++;
    }
    return 0;
}