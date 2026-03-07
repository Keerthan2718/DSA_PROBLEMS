#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i;
    int flag=0;
    printf("enter the first string:\n");
    scanf("%s",a);
    printf("ener the second string:\n");
    scanf("%s",b);
    int n=strlen(a);
    int m=strlen(b);
    if(n==m)
    {
        for(int i=0;a[i]!='\0';i++)
        {
            flag=1;
            if(a[i]!=b[i])
            {
                printf("strings are different\n");
                return 0;
            }

        }
    }
    else
    {
        printf("strings are different\n");
        exit(0);
    }
    if(flag==1)
        printf("strings are same\n");
    

  

}