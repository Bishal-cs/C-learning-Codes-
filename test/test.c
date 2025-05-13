#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number: ");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("The number is Max %d",x);
    } else {
        printf("The number is Max %d",y);
    }

}