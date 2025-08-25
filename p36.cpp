#include <iostream>  
using namespace std; 
class Demo
{
	int a,b;
	public:
		Demo(int p,int q)
		{
			cout<<"address stored in this "<<this<<endl;
			this->a=p;
			this->b=q;
		}
		void display()
		{
			cout<<a;
			cout<<b;
		}
};
int main()
{
	Demo d(10,20);
	cout<<"address of d obj "<<&d<<endl;
    return 0;
}