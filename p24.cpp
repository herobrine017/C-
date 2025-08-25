#include<iostream>
using namespace std;

int main()
{
    int a1[3][3]={1,2,3,4,5,6,7,8,9};
    int a2[3][3]={1,2,3,4,5,6};
    int a3[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(a3+i)+j)=*(*(a1+i)+j)+*(*(a2+i)+j);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<*(*(a3+i)+j)<<" ";
        }
    }
} 