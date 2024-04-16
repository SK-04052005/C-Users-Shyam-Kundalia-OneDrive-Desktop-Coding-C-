#include<iostream>

using namespace std;

class student
{

    char name[20];
    int rollno;
    float cpi;

    public:

    void getdata (void);
    void putdata (void)
    {
        cout<<"\nName : "<<name<<"\nRoll No. : "<<rollno<<"\nCPI : "<<cpi<<endl;
    };

    void changedata (void);

};

void student :: getdata(void)
{

    cout<<"Enter Roll No.: ";
    cin>>rollno;
   
    
    cout<<"Enter Name: ";
    fflush(stdin);
    cin>>ws;
    cin.getline(name,20);

    
    cout<<"Enter CPI: ";
    cin>>cpi;

}


void student :: changedata(void)
{
    
    char a;
    cout<<"Enter Data you want to alter : ";
    cout<<"\nEnter 'R' for Roll No.\nEnter 'N' for Name\nEnter 'C' for CPI : ";
    cin>>a;

    if (a=='R')
    {
        
        cout<<"Enter New Roll No.: ";
        cin>>rollno;
        putdata();

    }

    else if (a=='N')
    {

        cout<<"Enter Name: ";
        cin>>ws;
        cin.getline(name,20);
        putdata();

    }

    else if (a=='C')
    {

        cout<<"Enter New CPI: ";
        cin>>cpi;
        putdata();

    }

}


int main()
{

    student s[200];
    int n;
    
    cout<<"Enter number of students : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        
        s[i].getdata();

    }

    for(int i=0;i<n;i++)
    {

        s[i].putdata();

    }

    int choice;
    cout<<"Enter 1 if you want to alter data : ";
    cin>>choice;
    

    if (choice == 1)
    {
        int nu;
        cout<<"Enter Student you want to alter data of : ";
        cin>>nu;

        for (int i=0;i<n;i++)
        {
            if (nu == i+1)
            {
                s[i].changedata();
            }
        }
    }
    
    else
        return 1;


    return 0;

}