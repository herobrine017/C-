//memberwise assignment (shallow copy)
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
	
	string1 obj2("Solanke");
	obj2.display();

	obj2 = obj1;//using default memberwise assignment (shallow copy)
	obj1.display();
	obj2.display();
}
