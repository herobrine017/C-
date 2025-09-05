//creation of Dynamic Array of object on heap section

#include<iostream>
using namespace std;
class Student
{
	int rollno;
	char name[20];
	public:
		void accept()
		{
            cout<<"enter roll no : ";
			cin>>rollno;
            cout<<"enter name : ";
			cin>>name;
		}
		void display()
		{
			cout<<"rollno is "<<rollno<<" and name is "<<name<<endl;
			
		}
		~Student() {
        cout << "Destructor is called for Roll No: " << rollno << endl;
    }
};

int main()
{
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    Student* ptr = new Student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"student "<<(i+1)<<" : ";
        ptr[i].accept();
    }
    cout<<"display details\n";
    for(int i=0;i<n;i++)
    {
        ptr[i].display();
    }
    delete []ptr;
}