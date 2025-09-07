//overloading of == operator
 
#include<iostream> 
#include<string> 
using namespace std; 
  
class Car
{ 
  private: 
    string name; 
    int cost; 
    public: 
    Car(string n,int c)
    {
        name=n;
        cost=c;
    }

    bool operator ==(Car &obj)
    {
        if(name==obj.name && cost==obj.cost)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}; 
int main()
{ 
    Car obj1("santro",100);
    Car obj2("Maruti",200);
    if(obj1 == obj2)
    {
        cout<<"Equivalent";
    }
    else
    {
        cout<<"Not Equivalent";
    }
}
