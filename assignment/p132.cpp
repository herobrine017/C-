// io flags 
// iso::showpos
#include <iomanip>
#include <ios>
#include <iostream>
 
using namespace std;
 
int main()
{
 
cout<<setiosflags(ios::showpos)<<100;//+100
cout<<setiosflags(ios::showpos)<<-100;//-100
/*when u want to display + sign before any positive number
use showpos flag.work only for positive no*/


}

