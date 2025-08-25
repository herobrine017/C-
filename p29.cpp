#include<iostream>
using namespace std;
void add(int=10,int=2,int=5,int=6);

void add(int a,int b ,int c,int d)
{
    cout<<a+b+c+d<<endl;
}
int main()
{
    add();
    add(3);
    add(5,6);
    add(1,2,3);
    add(1,4,6,8);

}