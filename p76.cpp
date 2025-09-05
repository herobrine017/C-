#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
static int Count = 0;     
class Test {
public:
 
    Test()
    { 
    	cout<<this<<endl;//this prints memory address of object
        Count++;
        cout << "No. of Object created: " << Count<< endl;
    }
     ~Test()
    {
         cout<<this<<endl;
        cout << "No. of Object destroyed: " << Count << endl;                                  
        Count--;
        
    }
};
int main()
{
    Test t;
    cout<<&t<<endl;

	Test t1;
	cout<<&t1<<endl;
    
	Test   t2;
	cout<<&t2<<endl;
}