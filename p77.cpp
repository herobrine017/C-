//Calling destructor explicitely
#include <iostream>
using namespace std;
  class Test {
	public:
    Test()
    { 
   
       cout<<"constructor is called\n";
    }
     ~Test()
    {
    	
       cout<<"destructor is called"<<endl;; 
	   
    }
};

int main()
{
    Test t;
    t.~Test();
}