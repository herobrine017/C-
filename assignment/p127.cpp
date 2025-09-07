//String functions : strcpy() and strrev()
#include <iostream>
using namespace std;  
#include<string.h>
int main()  
{  
   char str1[20];
   char str2[20];
   cout<<"enter 1st string\n";
   cin>>str1;//pranav
   strcpy(str2,str1);//str2=pranav
   strrev(str1);// str1=vanarp
   if(strcmp(str1,str2)==0)
   {
        cout<<"string is palindrome";
   }
   else
   {
        cout<<"not palindrome";
   }
} 