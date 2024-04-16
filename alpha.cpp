#include<iostream>

using namespace std;

class alpha
{

        int x;
    
    public:

        alpha(int i)
        {
            x=i;
            cout<<"\n\nAlpha initialized : "<<x;
        }

};

class beta
{

        int y;

    public: 

        beta(int j)
        {
            y=j;
            cout<<"\n\nBeta initialized : "<<y;
        }

};

class gamma : public beta , public alpha
{
    
        float m,n;

    public: 

        gamma(float x1,float x2,int a,int b) : alpha(a*b),beta(b*2)
        {
            m=x1;n=x2;
            cout<<"\n\nGamma initialized : "<<m<<"\t"<<n<<"\n\n";
        }

};

int main()
{

    int o,p;
    float q,r;

    cout<<"Enter Alpha and Beta : ";
    cin>>o>>p;

    cout<<"Enter 2 Gammas : ";
    cin>>q>>r;

    gamma g(q,r,o,p);

    return 0;
    
}