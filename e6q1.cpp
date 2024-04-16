#include<iostream>

using namespace std;

class student
{
    protected:

        char university[50];
        char degree[20];

    public:

        void getdata(void)
        {

            cout<<"\nEnter the name of university : ";
            cin>>ws;
            cin.getline(university,50);

            cout<<"\nEnter Degree details : ";
            cin>>ws;
            cin.getline(degree,20);

        }

        void putdata(void)
        {

            cout<<"\n\nName of University : "<<university;
            cout<<"\n\nDetails of Degree : "<<degree;

        }

};

class employee
{

    protected:

        char empn[30];
        float salary;

    public:

        void getdata(void)
        {

            cout<<"\nEnter name of Employee : ";
            cin>>ws;
            cin.getline(empn,30);

            cout<<"\nEnter Salary : ";
            cin>>salary;

        }

        void putdata(void)
        {
            
            cout<<"\n\nName of Employee : "<<empn;
            cout<<"\n\nSalary : "<<salary<<"\n\n";

        }

};

class manager: private student, private employee
{
    
    public:
    
        void getdata(void)
        {

            student::getdata();
            employee::getdata();

        }

        void putdata(void)
        {

            student::putdata();
            employee::putdata();

        }

};

int main()
{

    manager M;

    M.getdata();
    M.putdata();

    return 0;

}