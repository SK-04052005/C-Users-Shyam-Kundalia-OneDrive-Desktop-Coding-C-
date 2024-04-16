#include<iostream>

using namespace std;

int main()
{

    void *gp;
    int a=25;
    int *ptr;

    gp=&a;
    ptr=(int*)gp;

    cout<<"\n"<< ptr << "\n" << *ptr << "\n";



    return 0;

}