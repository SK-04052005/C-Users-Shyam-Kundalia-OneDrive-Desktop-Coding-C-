#include<iostream>

using namespace std;

void swap ( int &a , int &b );

int main()
{

    int m,n;

    cout<<"Enter two integers : ";
    cin>>m>>n;

    swap(m,n);


    return 0;

}

void swap ( int &a , int &b )
{

    int t = a;
    a=b;
    b=t;

    cout<<"After swapping : \n"<<"A="<<a<<"\nB="<<b<<"\n";
    
}