#include<stdio.h>
int main(){
    int a,b,L;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        L=a;
    }else{
        L=b;
    }
    printf("The larger number is %d",L);
return 0;
}