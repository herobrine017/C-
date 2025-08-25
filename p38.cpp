#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[]="hello";
    int n=strlen(s);
    for(int i=0;i<n/2;i++)
    {
        int temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
}