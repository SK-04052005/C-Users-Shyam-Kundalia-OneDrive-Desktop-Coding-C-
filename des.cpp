#include<iostream>

using namespace std;

class A
{

        int z;

    public:

        A() { z = 25; }

        A(int v) { z = v; }

        ~A()
        {

            cout<<z<<"\n\n";
            cout<<"Des\n\n";

        }

};

A C1;

int main()
{

    A a1(10);
    A a2(50);

    return 0;
    
}