//Dynamic Initialization of Strings Using Constructors
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    int len;
    char* ptr;
    public:
    String()
    {
        cout<<"enter length : ";
        cin>>len;
        ptr= new char[len+1];
        cout<<"enter string : ";
        cin>>ptr;
    }
    String(const char* s)
    {
        len=strlen(s);
        ptr=new char[len+1];
        strcpy(ptr,s);
    }

    String(char c,int len)
    {
        this->len=len;
        ptr = new char[len];
        for(int i=0;i<len;i++)
        {
            ptr[i]=c;
        }
        ptr[len]='\0';
    }

    String(int len)
    {
        this->len=len;
        ptr = new char[len];
        cout<<"enter string : ";
        cin>>ptr;
    }

    void display()
    {
        cout<<"String is "<<ptr<<" of length "<<len<<"\n"<<endl;
    }
    ~String()
    {
        cout<<"destructor called"<<endl;
        delete []ptr;
    }
};

int main()
{
    String s1;
    s1.display();

    String s2("Pranav");
    s2.display();

    String s3('*',80);
    s3.display();

    String s4(4);
    s4.display();
}