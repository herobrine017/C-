#include<iostream>
using namespace std;

class employee
{
    int id;
    public:
    employee()
    {
        cout<<"in default constructor of employee"<<endl;
        id=0;
    }
    employee(int i)
    {
        cout<<"in parameterized constructor of employee"<<endl;
        id=i;
    }
    void display()
    {
        cout<<"employee id is "<<id<<endl;
    }
    int find_salary()
    {
        return 0;
    }
};

class wage_employee : public employee
{
    int hrs,rate;
    public:
    wage_employee()
    {
        cout<<"in default constructor of wage_employee "<<endl;
        hrs=rate=0;
    }
    wage_employee(int i,int h,int r):employee(i)
    {
        cout<<"in parameterized constructor of wage_employee "<<endl;
        hrs=h;
        rate=r;
    }
    void display()
    {
        employee::display();
        cout<<"hrs of employee is "<<hrs<<endl;
        cout<<"rate of employee is "<<rate<<endl;
    }
    int find_salary()
    {
        return hrs*rate;
    }
};

class salesperson : public wage_employee
{
    int sales,comm;
    public:
    salesperson()
    {
        cout<<"in default constructor of salesperson "<<endl;
        sales=comm=0;
    }
    salesperson(int i,int h,int r,int s,int c):wage_employee(i,h,r)
    {
        cout<<"in parameterized constructor of salesperson "<<endl;
        sales=s;
        comm=c;
    }
    void display()
    {
        cout<<"Sales of employee is "<<sales<<endl;
        cout<<"Commision of employee is "<<comm<<endl;
    }
    int find_salary()
    {
        return wage_employee::find_salary()+sales*comm;
    }
};

int main()
{
    wage_employee we1(1,5,1000);
    we1.display();
    cout<<we1.find_salary();
}