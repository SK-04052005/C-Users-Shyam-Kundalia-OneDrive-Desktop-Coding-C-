#include<iostream>

using namespace std;

class Reverse
{

    int i;

    public: 

    Reverse (void)
    {
        
        int temp,n;
        cout<<"\nEnter the number : ";
        cin>>i;

        temp=0;

        while(i>0)
        {

            temp=(temp*10)+i%10;
            i=i/10;

        }

        cout<<"\nReverse of a number : "<<temp<<"\n\n";

    }

};

int main()
{

    Reverse R1;

    return 0;

}