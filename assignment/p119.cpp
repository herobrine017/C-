// enum , assigned from A , used by ASCII values
#include <iostream>
using namespace std;

enum Day { sunday = 'A', monday , tuesday , wednesday , thursday , friday , saturday };

int main()
{
    Day today = sunday;

    switch(today)
    {
        case 65 :
        cout<<"it is sunday";
        break;

        case 66 :
        cout<<"it is monday";
        break;
        
        case 67 :
        cout<<"it is tuesday";
        break;
        
        case 68 :
        cout<<"it is wednesday";
        break;

        case 69 :
        cout<<"it is thursday";
        break;

        case 70 :
        cout<<"it is friday";
        break;

        case 71 :
        cout<<"it is saturday";
        break;

        default : 
        cout<<"enter proper day";
    }
}