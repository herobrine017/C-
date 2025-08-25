#include<iostream>
using namespace std;
void user_strcpy(char*,char*);

void user_strcpy(char* s2,char* s1)
{
    while(*s1!='\0')
    {
        *s2=*s1;
        s1++;
        s2++;
    }
    *s2='\0';
}
int main()
{
    char str1[10],str2[10];
    cout<<"enter the string : ";
    cin>>str1;
    user_strcpy(str2,str1);
    cout<<"\nCopied string is : "<<str2;
}