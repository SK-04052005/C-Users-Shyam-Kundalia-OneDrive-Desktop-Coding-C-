#include<iostream>

using namespace std;

int main()
{

    void *gp;
    int i;
    char a;
    double j;

    cout<<"Enter integer: ";
    cin>>i;

    cout<<"Enter character: ";
    cin>>a;

    cout<<"Enter floating type number: ";
    cin>>j;

    gp=&i;
    cout<<*(int*)gp<<"\n";

    gp=&a;
    cout<<*(char*)gp<<"\n";

    gp=&j;
    cout<<*(double*)gp<<"\n";


    return 0;

}