#include<iostream>

using namespace std;

inline double fact(double n)
{

    int k;
    double ans=1;

    if(n==0)
    {
        return 1;
    }

    else
    {
        for(k=1;k<=n;k++)
        {
            ans=ans*k;
        }
        return ans;
    }

}

inline double cube(double &a)
{
    return (a*a*a);
}

int main()
{

    double i,f,c;

    cout<<"Enter number you want Cube and Factorial of : ";
    cin>>i;

    f=fact(i);
    c=cube(i);

    cout<<"\n\nFactorial of "<<i<<" is : "<<f<<"\n\nCube of "<<i<<" is : "<<c<<"\n\n";


    return 0;

}