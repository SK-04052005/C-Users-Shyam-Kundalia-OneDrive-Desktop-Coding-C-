#include<iostream>

using namespace std;

int main()
{

	int a,b;
	
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\n";
	cout<<"_______________";
	cout<<"\nAfter swapping:\n"<<"A="<<a<<"\n"<<"B="<<b<<"\n";
	cout<<"_______________";
	cout<<"\n";
	
	return 0;

}
