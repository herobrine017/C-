#include<iostream>
using namespace std;
void user_strcat(char*,char*);

void user_strcat(char* s1,char* s2)
{
    while(*s1!='\0')
    {
        s1++;
    }
    while(*s2!='\0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
    *s2='\0';
}
int main()
{
    char str1[10]="hello";
    char str2[10]="bye";
    user_strcat(str1,str2);
    cout<<"\nCopied string is : "<<str1;
    return 0;
}