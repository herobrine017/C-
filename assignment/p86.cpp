//memberwise assignment (deep copy) 
//Pura samaj nahi aaya
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

    string1& operator=(string1& obj)//assignment operator overloaded
    {
	    cout<<"assignment operator function called\n";
	    delete[] this->ptr; // free old memory
	    this->len=obj.len;
	    this->ptr=new char[this->len+1];
	    strcpy(this->ptr,obj.ptr); // copy content
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

	obj2 = obj1;//or s1.operator=(s2), using memberwise assignment overloaded(deep copy)
	obj1.display();
	obj2.display();
}
