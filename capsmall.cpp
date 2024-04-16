#include<iostream>

using namespace std;

int main()
{

	int i,n;

    // cout<<"Enter Size : ";
    // cin>>n;

    char str[200];

	cout<<"Enter string:";
	cin.getline(str,200);
	

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
    }
	cout<<str;
	cout<<"\n";


	return 0;

}
