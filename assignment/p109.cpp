//template 2)class template
#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1 ;  
    T num2 ;  
	A(T x,T y) 
    {
		num1=x;
		num2=y;
	}          
    void add()  
    {  
        std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
    }  
      
};  
  
int main()  
{  
    A<int> obj1(2,3);  // in class , we need to specify the type as <int> or <double> etc.
    obj1.add();    

    A<double> obj2(10.2,20.5);
    obj2.add();
    return 0;
} 