#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a == 0){
        printf("The number is zero");
    } else if (a > 0){
        printf("The number is positive");
    }else 
        printf("The number is negative");
    return 0;
}

    