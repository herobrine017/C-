//User defined Exception class
#include <iostream>  
#include <exception>  // for using exception class
using namespace std;  

class Myexception : public exception //Creating a Custom Exception Class
{ //MyException is Custom Exception Class
  //It inherits from exception, a built-in class.
    public:
    const char* what() const throw() //overrided the what() function
    {
        return "exception : cannot divide with zero ";
    }
};

int main()
{
    int x,y;
    cout<<"enter x and y : ";
    cin>>x>>y;
    try
    {
        if(y==0)
        {
            Myexception e;//e is object of Myexception class
            throw e;
        }
        else
        {
            cout<<"division is "<<x/y;
        }
    }
    catch(exception& ex)
    {
        cout<<ex.what();
    }
}