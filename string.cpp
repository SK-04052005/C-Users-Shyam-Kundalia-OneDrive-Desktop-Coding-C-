#include<iostream>
#include<string>

using namespace std;

int main()
{

    string s1;
    string s2;

    getline(cin,s1);
    getline(cin,s2);

    cout<<"\n\nOriginal Strings : \n\n"<<s1<<"\n\n"<<s2<<"\n\n";

    s1.insert(4,s2);
    cout<<"\n\n"<<s1;

    s1.insert(0,s2);
    cout<<"\n\n"<<s1;

    s1.erase(4,5);
    cout<<"\n\n"<<s1;

    s1.replace(1,0,s2);
    cout<<"\n\n"<<s1;

    cout<<"\n\n";

    return 0;

}