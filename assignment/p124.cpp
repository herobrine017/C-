//String function : strcmp()
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[10];
    char s2[10];
    cout<<"enter 1st string : ";
    cin>>s1;
    cout<<"enter 2nd string : ";
    cin>>s2;
    int x = strcmp(s1,s2);

    if(x==1)
    {
        cout<<"string 1 is greater";
    }
    else if(x==-1)
    {
        cout<<"string 2 is greater";
    }
    else if(x==0)
    {
        cout<<"both are same";
    }
}