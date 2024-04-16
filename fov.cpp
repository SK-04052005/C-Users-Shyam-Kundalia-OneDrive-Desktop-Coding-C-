#include<iostream>
 
using namespace std;

int perimeter (int a,int b,int c)
{
    return (a+b+c);
}

int perimeter (int s)
{
    return (4*s);
}

int perimeter (int i, int j)
{
    return (2*(i+j));
}

int main()
{
    int p,q,x,y,z,w,t,s,r;

    cout<<"Enter Sides of Triangle : \n";
    cin>>x>>y>>z;

    cout<<"Enter Side of Square : ";
    cin>>w;

    cout<<"Enter Sides of Rectangle : \n";\
    cin>>p>>q;

    t=perimeter(x,y,z);
    s=perimeter(w);
    r=perimeter(p,q);

    cout<<"\nPerimeter of Triangle = "<<t<<"\nPerimeter of Square = "<<s<<"\nPerimeter of Rectangle = "<<r<<"\n\n";

    return 0;
    
}