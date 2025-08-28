//Write a student class and use it in your program. Store the data of 10 students and display
 //the sorted data according to their roll numbers, dates of birth, and total marks.
 #include<iostream>
using namespace std;

class Student
{
    public:
    int rollno[5];
    void accept(int i)
    {
        cin>>rollno[i];
    }
    void display(int i)
    {
        cout<<rollno[i]<<" ";
    }

    void sort(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(rollno[j]>rollno[i])
                {
                int temp=rollno[i];
                rollno[i]=rollno[j];
                rollno[j]=temp;
                }
            }
        }
    }
};
int main()
{
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    Student obj;
    cout<<" enter roll no of students ";
    for(int i=0;i<n;i++)
    {
        obj.accept(i);
    }
    obj.sort(n);
    for(int i=0;i<n;i++)
    {
        obj.display(i);
    }
}