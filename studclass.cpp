#include<iostream>

using namespace std;

class student
{
    
    char name[20];
    char id[20];
    int marks[3];
    float grade;

    public:

    void getinf(void)
    {

        fflush(stdin);
        cout<<"Enter name: ";
        cin.getline(name,20);
        fflush(stdin);
        cout<<"Enter id: ";
        cin.getline(id,20);

        for(int i=0;i<3;i++)
        {

            cout<<"Enter marks of Subject "<<i+1<<" : ";
            cin>>marks[i];

        }

        cout<<"Enter Grade: ";
        cin>>grade;

    }

    void putinf(void)
    {

        cout<<"\n\nName is: "<<name;
        cout<<"\n\nID is: "<<id;

        for(int i=0;i<3;i++)
        {

            cout<<"\n\nMarks of Subject "<<i+1<<" : "<<marks[i];           

        }

        cout<<"\n\nGrades: "<<grade<<"\n\n";

    }

};

int main()
{

    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    student s[n];

    for(int i=0;i<n;i++)
    {

        s[i].getinf();
        
    }

    for(int i=0;i<n;i++)
    {

        s[i].putinf();

    }
    
    return 0;

}