#include<stdio.h>
int main(){
    int i,j,n,x= 1;
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=i;j<(n-1);j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;    
}