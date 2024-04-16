#include<iostream>

using namespace std;

int main ()
{

    void *gp;
    int *b;
    int n;

    cout<<"Enter any Integer : ";
    cin>>n;

    b=&n;

    gp=b;

    cout<<"\n"<<*(int *)gp<<"\n\n";



    return 0;

}