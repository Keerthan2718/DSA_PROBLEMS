#include<stdio.h>
int main()
{
    int a[20],i,n,number=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        number=number*10+a[i];
    }
    number=number+1;
    printf("sum of the number is: %d",number);
    return 0;
    
}