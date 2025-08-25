#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[20]="hello world";
    int len1=strlen(str1);
    int size1=sizeof(str1);
    cout<<"Length of string is "<<len1<<endl;
    cout<<"Size of string is "<<size1<<endl;

    char str2[20]="hello\0 world";
    int len2=strlen(str2);
    int size2=sizeof(str2);
    cout<<"Length of string is "<<len2<<endl;
    cout<<"Size of string is "<<size2<<endl;
}