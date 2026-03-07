#include<stdio.h>
void main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if((n/2)*2==n)
    {
        printf("the number is even");

    }
    else
    {
        printf("the number is odd");
        
    }
}