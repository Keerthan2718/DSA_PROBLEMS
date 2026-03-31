#include<stdio.h>
void main()
{
    int n,m=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",m+=1);
            
        }
        printf("\n");

    }
}