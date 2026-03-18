#include<stdio.h>
void main()
{
    int n,k;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)    {
        scanf("%d",&arr[i]);
    }
    printf("enter how much array should leftshift \n");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int temp=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("the array after left shift is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}