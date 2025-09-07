//class temmplate , array initialization 
#include <iostream>  
using namespace std;  
template<class T, int size>  
class A   
{  
    public:  
    T arr[size];  // automatic array initialization.
    void insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            arr[j] = i;  
            i++;  
        }  
    }  
      
    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            std::cout << arr[i] << " ";  
        }  
    }  
};  
int main()  
{  
    A<int,10> t1;  
    t1.insert();  
    t1.display();  
    return 0;  
}
// array<int, 15> t1;                        // array of 15 integers.  
// array<float, 10> t2;                    // array of 10 floats.   
// array<char, 4> t3;                      // array of 4 chars. 