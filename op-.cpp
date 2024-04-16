#include<iostream>

using namespace std;

class space
{

        int x,y,z;

    public:

        void getdata(void)
        {
            cout<<"Enter x,y,z : ";
            cin>>x>>y>>z;
        }

        void display(void)
        {
            cout<<"\n"<<x<<"\t"<<y<<"\t"<<z<<"\n";
        }

        void operator-() { x=-x;y=-y;z=-z; }

};

int main()
{

    space s1;
    s1.getdata();
    s1.display();
    -s1;
    s1.display();

    return 0;

}