#include<stdio.h>
void main()
{
    int a[20],b[20],c[40];
    int i,k=0,n,m;
     int count=0;
    float median;
    printf("enter the size of the array one\n ");
    scanf("%d",&n);
    printf("enter the size of the array 2\n ");
    scanf("%d",&m);
    printf("enter the array element for array 1\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the array element for array 2 \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[k++]=a[i];
       
    }
    for(i=0;i<m;i++)
    {
        c[k++]=b[i];
       
    }
    count=m+n;
     for (i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%d\t",c[i]);

    }
    printf("\n");
     if(count%2==0)
    {
        n=count/2;
        median=(median = ((float)c[n] + (float)c[n-1]) / 2);
        printf("the median is %f\n",median);  

        
    }
    else{
        n=count/2;
        median=c[n];
        printf("the median is %f\n",median);  

    } 
   

}