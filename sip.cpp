#include<iostream>

using namespace std;

class B
{

        int a;

    public:

        int b;

        void set_ab()
        {
            
            cin>>a>>b;

        }

        int get_a()
        {

            return a;

        }

        void show_a()
        {

            cout<<"\n\nA="<<a<<"\n\n";

        }

};

class D:private B
{

        int c;
    
    public:

        void mul()
        {

            set_ab();
            c=b*get_a();

        }

        void display()
        {

            cout<<"A= "<<get_a()<<"\n\n";
            cout<<"B= "<<b<<"\n\n";
            cout<<"C= "<<c<<"\n\n";

        }

};

int main()
{

    D d;
    
    d.mul();
    d.display();

    d.mul();
    d.display();
    /*d.b=20;
    d.mul();
    d.display();*/

    return 0;

}