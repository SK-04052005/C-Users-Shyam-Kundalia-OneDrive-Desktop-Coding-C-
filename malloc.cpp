#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct student
{
    char name[20];
    int id;
    int marks;
}stud;

int main()
{

    stud *i, *j, *ptr;
    int n;
    int k;

    cout<<"Enter Size : ";
    cin>>n;

    i=(stud*)malloc(n*sizeof(stud));
  //  j=(stud*)calloc(n,sizeof(stud));

    for(k=0;k<n;k++)
    {
        cin>>ptr->name>>ptr->id>>ptr->marks;
        ptr++;
    }

    ptr=i;

    for(k=0;k<n;k++)
    {
        cout<<"\n"<<ptr->name<<"\n"<<ptr->id<<"\n"<<ptr->marks<<"\n\n";
        ptr++;
    }

 /*   ptr=i;

    j=(stud*)realloc(j,sizeof(char));

    free(i);

    cout<<"\nSize of J= "<<sizeof(j);

    cout<<"\nSize of I= "<<sizeof(i)<<"\n";
*/
    return 0;
}