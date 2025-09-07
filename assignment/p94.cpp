//macro function
#include <iostream>  
using namespace std;

#define SQUARE(x) ((x)*(x))
int main()
{
    int answer = SQUARE(5);
    cout<<answer;
}