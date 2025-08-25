#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int rollno;
    char name[];
    public:
    Student()
    {
        rollno=101;
        strcpy(name,"Pranav");
    }
    Student(int n,const char* surname)
    {
        rollno=n;
        strcpy(name,surname);
    }
    void display()
    {
        cout<<"roll number is : "<<rollno<<endl;
        cout<<"Student name is : "<<name<<endl;
    }
};
int main()
{
    Student s1;
    s1.display();
    Student s2(201,"Solanke");
    s2.display();
}
