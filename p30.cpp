#include<iostream>
using namespace std;

void add(int,int,int);

void add(int a=1,int b=1,int c=2)
{
    cout<<a+b+c<<endl;
}
int main()
{
    add();
    add(2);
    add(2,2);
    add(3,3,3);
}