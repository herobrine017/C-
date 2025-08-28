//Write a student class and use it in your program. Store the data of 10 students and display
 //the sorted data according to their roll numbers, dates of birth, and total marks.
#include<iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    void accept()
    {
        cin>>rollno;
    }
};
int main()
{
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    Student* obj=new Student[n];
    cout<<"Enter roll number of students : ";
    for(int i=0;i<n;i++)
    {
        obj[i].accept();
    }
}