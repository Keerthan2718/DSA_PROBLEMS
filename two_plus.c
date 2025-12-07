#include<stdio.h>
int main()
{
    int a[]={10,20,50,40},i,j;
    int target=30;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]+a[j]==target)
            {
              printf("[%d,%d]",i,j);
            }
        }
    }
    return 0;
   
    
}