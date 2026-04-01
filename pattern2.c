#include<stdio.h>
void main()
{
    int n,m=0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        m=i-1;
        for(int j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        while(m>=1)
        {
            printf("%d ", m);
            m--;
        }
        printf("\n");
    }
}