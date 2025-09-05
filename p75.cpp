//using Dynamic Initialization for min max number code
#include <iostream> 
using namespace std; 
#include<string.h>
class A
{
    int size;
    int* ptr;
    public:
    A()
    {
        cout<<"enter size : ";
        cin>>size;
        ptr=new int[size];
    }
    void get()
    {
        cout<<"enter elements : ";
        for(int i=0;i<size;i++)
        cin>>ptr[i];
    }
    void show()
    {
        cout<<"values are : ";
        for(int i=0;i<size;i++)
        cout<<ptr[i]<<" ";
    }
    int max()
    {
        int max=ptr[0];
        for(int i=0;i<size;i++)
        {
            if(ptr[i]>max)
            {
                max=ptr[i];
            }
        }
        return max;
    }
    int min()
    {
        int min=ptr[0];
        for(int i=0;i<size;i++)
        {
            if(ptr[i]<min)
            {
                min=ptr[i];
            }
        }
        return min;
    }
};

int main()
{
    A obj;
    obj.get();
    obj.show();
    cout<<"maximum is "<<obj.max()<<endl;
    cout<<"maximum is "<<obj.min()<<endl;
}