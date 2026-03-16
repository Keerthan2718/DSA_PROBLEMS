#include<stdio.h>
void main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<5-i;j++)
        {
            printf(" ");
        }
        //ascending
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        //descending
        for(int k=i-1;k>0;k--)
        {
            printf("%d",k);
        }
        printf("\n");

    }
}