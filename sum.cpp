#include<iostream>

using namespace std;

int main()
{

    int a,b,sum;
    float avg;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    sum=a+b;
    avg=float(sum)/2;

    cout<<"Sum is = "<<sum<<"\n";
    cout<<"Average is = "<<avg<<"\n";

    return 0;

}
