#include<stdio.h>

int main()
{

    void *gp;
    int a=25;
    gp=&a;
    int *p;
    p=gp;

    printf("\n%d\n",*p);


    return 0;

}