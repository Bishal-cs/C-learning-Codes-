#include<stdio.h>
int FAT(int);
int FAT(int n){
    if(n==0)
        return 1;
    for (int i=1;i<=n;i++){
        int R=n*i;
	}
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int R=FAT(n);
    printf("%d",R);
    return 0;
}