#include <iostream>
using namespace std;
void showx();
void showx()
{
    int x=0;
    cout<<x;
    x++;
}

void showy()
{
    static int y=0;
    cout<<y;
    y++;
}
int main()
{
    cout<<"Local variable x :";
    showx();
    showx();
    showx();
    cout<<"\nstatic variable y :";
    showy();
    showy();
    showy();
}