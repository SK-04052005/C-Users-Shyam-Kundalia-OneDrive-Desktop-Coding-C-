#include<iostream>
#include<cmath>

using namespace std;

class Area
{

    public:

    Area(float a)
    {

        cout<<"\n\nArea of Circle = "<<(M_PI*a*a)<<"\n\n";

    }

    Area(float l,float b)
    {

        cout<<"\nArea of Rectangle = "<<(l*b)<<"\n\n";

    }

    Area(float ba,double h)
    {

        cout<<"\nArea of Triangle = "<<((h*ba)/2)<<"\n\n";

    }

};

int main()
{

    float i;
    float a,c,d;
    double e;

    cout<<"Enter radius of circle : ";
    cin>>i;

    cout<<"Enter Length of Rectangle : ";
    cin>>a;
    cout<<"Enter Breadth of Rectangle : ";
    cin>>c;

    cout<<"Enter Height of Triangle : ";
    cin>>d;
    cout<<"Enter Base of Triangle : ";
    cin>>e;
    
    
    Area C(i);
    Area R(a,c);
    Area T(d,e);

    return 0;

}