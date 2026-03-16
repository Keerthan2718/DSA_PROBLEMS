#include<stdio.h>
void main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<5-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++)
        {
            printf("*"); 
        }
        printf("\n");

    }
    for(int i=3;i>0;i--)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++)
        {
            printf("*"); 
        }
        printf("\n");

    
}
}