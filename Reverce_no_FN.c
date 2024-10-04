#include<stdio.h>
 int prime (int);
 int prime (int n){
    int R=0,r;
    while(n!=0){
        r=n%10;
        n=n/10;
        R=R*10+r;
    }
	return R;
 }
 int main(){
    int a,F=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    F=prime(a);
    printf("Reversed number: %d",F);
return 0; 
}