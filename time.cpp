#include<iostream>

using namespace std;

class Time
{
    int minutes;
    int hours;

    public:
    void gettime(void);
    void puttime(void);
    void sum(Time,Time);
};

int main()
{

    Time T1,T2,T3;

    T1.gettime();
    T2.gettime();

    T1.puttime();
    T2.puttime();
    T3.sum(T1,T2);

    return 0;

}

void Time :: gettime(void)
{
    
    cout<<"\nEnter Hours : ";
    cin>>hours;
    cout<<"\nEnter Minutes : ";
    cin>>minutes;
    
}

void Time :: puttime(void)
{
    cout<<"\nTime="<<hours<<":"<<minutes<<"\n\n";
}

void Time :: sum(Time T1,Time T2)
{

    minutes=T1.minutes+T2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+T1.hours+T2.hours;
    puttime();
    
}