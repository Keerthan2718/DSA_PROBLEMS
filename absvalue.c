#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the number:\n");
    scanf("%d",&m);
    if(m<0)
    {
        n=m*-1;
        printf("the abs value of a number  %d is %d",m,n);
    }
    else
    {
        printf("the abs value of a number %d is %d",m,m);
    }
}