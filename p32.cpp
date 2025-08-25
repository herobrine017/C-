#include<iostream>
using namespace std;

    class Complex
    {
    public:
    static int cnt;

    };
    int Complex ::cnt=10;
    int main(){
        cout<<Complex ::cnt;
    }
