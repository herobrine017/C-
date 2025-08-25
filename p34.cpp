#include<iostream>
#include<string.h>
using namespace std;

class Account
{
    public:
    int accno;
    char name[10];
    static float RateOfInt;
    
    Account(int n,char* name2)
    {
        accno=n;
        strcpy(name,name2);
    }
    void display()
    {
        cout<<"Account number is : "<<accno<<" of "<<name<<" with Rate of interest : "<<RateOfInt<<endl;
    }
};
float Account::RateOfInt=6.5;
int main()
{
    char s1[]="Pranay";
    Account a1(101,s1);
    a1.display();
}