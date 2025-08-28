//find avg of student in dynamic array of objects
#include<iostream>
using namespace std;

class Student
{
    char name[10];
    int marks[3];

    public:
    void display()
    {
        int sum=0;
        cin>>name;
        cout<<"enter marks : ";
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
        for(int i=0;i<3;i++)
        {
            sum=sum+marks[i];
        }
        float avg=(float)sum/3;
        cout<<"Average marks of "<<name<<" is "<<avg<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number of students :";
    cin>>n;
    Student* s=new Student[n];
    for(int i=0;i<n;i++)
    {
        s[i].display();
    }
    delete []s;
}