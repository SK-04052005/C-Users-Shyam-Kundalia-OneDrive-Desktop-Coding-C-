#include <iostream>

using namespace std;

int main()
{

	int i,j;
	int n;
	
	cout<<"Enter number of lines you want: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	return 0;
}
