#include<stdio.h>
void main(){
    int i,j,k,z;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i;j++){
            printf("\t");
        }
        z=2*i+1;
        for(k=1;k<=2*i+1;k++){
            if(k==1 || k==z){
                printf("*\t");
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
    for(i=0;i<2*n-1;i++){
        printf("\t*");
    }
}