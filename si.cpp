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

class D:public B
{

        int c;
    
    public:

        void mul()
        {

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
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();
    d.b=20;
    d.mul();
    d.display();

    return 0;

}