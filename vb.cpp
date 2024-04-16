#include<iostream>

using namespace std;

class student
{

    protected:
        int roll;
    
    public:
        void getdata(int a) {roll=a;}
        void putdata(void) {cout<<"Roll No. : "<<roll<<"\n\n";}

};

class test : virtual public student
{

    protected:
        float p1,p2;

    public:
        void getmarks(float x,float y) {p1=x;p2=y;}
        void putmarks(void) {cout<<"\n\n"<<p1<<"\n\n"<<p2<<"\n\n";}

};

class sports : virtual public student
{

    protected:
        float score;

    public: 
        void getscore(float s) {score=s;}
        void putscore(void) {cout<<"\n\nSports : "<<score<<"\n\n";}

};

class result : public test , public sports
{
        
        float total;

    public: 
        void display(void)
        {
            total=p1+p2+score;

            putdata();
            putmarks();
            putscore();

            cout<<"\n\nTotal = "<<total<<"\n\n";

        }

};

int main()
{
   
    result s1;
    s1.getdata(678);
    s1.getmarks(30.5,25.5);
    s1.getscore(7.0);
    s1.display();   

    return 0;

}