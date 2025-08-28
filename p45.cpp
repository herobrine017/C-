//creation of Dynamic Array of object on heap section
#include<iostream>
using namespace std;

class Student
{
    int rollno;
    char name[10];
    public:
    void accept()
    {
        cin>>rollno;
        cin>>name;
    }
    void display()
    {
        cout<<"roll no of "<<name<<" is "<<rollno<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    Student* s=new Student[n];
    cout<<"enter details";
    for(int i=0;i<n;i++)
    {
        s[i].accept();//or (s+i)->display();
    }
    for(int i=0;i<n;i++)
    {
        s[i].display();//or (s+i)->display();
    }
    delete []s;
}