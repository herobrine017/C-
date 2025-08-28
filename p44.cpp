//Dynamic object creation on heap
#include<iostream>
using namespace std;
class Cdate
{
    public:
    int dd,mm,yy;
    Cdate()
    {
        dd=mm=yy=0;
    }
    Cdate(int a,int b,int c)
    {
        dd=a;
        mm=b;
        yy=c;
    }
    void show()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
};
int main()
{
    Cdate* ptr=new Cdate();
    ptr->show();
    Cdate* ptr1=new Cdate(28,8,25);
    ptr1->show();
}