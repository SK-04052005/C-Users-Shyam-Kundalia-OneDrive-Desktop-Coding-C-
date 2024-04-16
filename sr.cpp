#include<iostream>

using namespace std;

int m=10;

int main()
{

    cout<<"\nM="<<m;

    int m=20;

    {
        cout<<"\nM="<<m;
    }

    {
        int k=m;
        int m=30;
        cout<<"\nK="<<k;
        cout<<"\nM="<<m;
        cout<<"\n::M="<<::m;
    }

    cout<<"\nM="<<m;
    cout<<"\n::M="<<::m<<"\n";


    return 0;

}