#include<stdio.h>
void main()
{
    printf("enter the number of elements in the array");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array");
    for(int i=0;i<n;i++)    {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for(int i=1;i<n;i++)    {
        if(arr[i]>largest)        {
            largest = arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==largest)        {
            arr[i]=-99999;
    }
}
    int secondlargest = arr[0];
    for(int i=0;i<n;i++)    {
        if(arr[i]>secondlargest)        {
            secondlargest = arr[i];
        }
    }

printf("the largest element in the array is %d\n",largest);
printf("the second largest element in the array is %d",secondlargest);
}