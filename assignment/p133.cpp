//Exception Handling
#include <iostream>
using namespace std;

int main()
{
    int num,deno,result=0;
    cout<<"enter numerator and denominator : ";
    cin>>num>>deno;
    try
    {
        if(deno == 0)
        {
            throw deno;
        }
        result = num/deno;
    }
    catch(int ex)
    {
        cout<<"Exception : denominator can't be "<<ex<<endl;
    }
    cout<<result;
}