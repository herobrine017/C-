//enum
#include <iostream>
using namespace std;
// note , you can also use number in switch cases as " case 0 ".
enum Day { sunday , monday , tuesday , wednesday , thursday , friday , saturday };

int main()
{
    Day today = sunday;

    switch(today)
    {
        case sunday :
        cout<<"it is sunday";
        break;

        case monday :
        cout<<"it is monday";
        break;
        
        case tuesday :
        cout<<"it is tuesday";
        break;
        
        case wednesday :
        cout<<"it is wednesday";
        break;

        case thursday :
        cout<<"it is thursday";
        break;

        case friday :
        cout<<"it is friday";
        break;

        case saturday :
        cout<<"it is saturday";
        break;

        default : 
        cout<<"enter proper day";
    }
}