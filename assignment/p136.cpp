// C++ code for a simple program that prompts the user to enter their age 
// and then checks if the age is a valid number between 0 and 100. 
// If the age is not within this range, an exception is thrown,
//  which is caught by the catch block, which prints an error message.

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int age;
    cout<<"enter age : ";
    cin>>age;

    try
    {
        if(age>100 || age<0)
        {
            throw age;
        }
        cout<<"age is "<<age;
    }
    catch(int ex)
    {
        cout<<"Exception : "<<age<<" is not between 0 to 100 ";
    }

}