#include<iostream>

using namespace std;

class Test
{

        int *a;
    
    public:

        Test() {}

        Test(int size)
        {

            a=new int[20];
            cout<<"\n\nCons\n\n";

        }

        ~Test()
        {

            delete a;
            cout<<"Des";

        }
    
};

int main()
{

    Test *t1 = new Test[5];

    delete t1;


    return 0;

}