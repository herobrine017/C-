//display 2 strings using copy constructor
#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
	string1(const char* s)
	{
		len=strlen(s);
		ptr = new char[len+1];
		strcpy(ptr,s);
	}

	string1(const string1& obj)
	{
		this->len=obj.len;
		this->ptr = new char[this->len+1];
		strcpy(this->ptr,obj.ptr);
	}

	void display()
	{
		cout<<"length is "<<len<<endl;
		cout<<"String is "<<ptr<<endl;
	}
	~string1()
	{
		delete []ptr;
	}
};
int main()
{	
	string1 obj1("Pranav");
	obj1.display();
	string1 obj2(obj1);
	obj2.display();
}
