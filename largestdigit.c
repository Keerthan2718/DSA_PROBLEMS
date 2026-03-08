#include<stdio.h>
void main()
{
    int a[20],i=0,n,m,p,largest;
    printf("enter the number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        p=n%10;
        a[i]=p;
        n=n/10;
        i++;
    
    }
    m=i;
    largest=a[0];
    for(i=0;i<m;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }

    }
    printf("the largest digit is %d",largest);




}