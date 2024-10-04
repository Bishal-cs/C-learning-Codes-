#include<stdio.h>
#include<stdlib.h>
/*int* array1();
void main(){
	int i,n;
	//int a[10];
	int *a = array1();
	n = sizeof(a)/sizeof(a[0]);
	printf("Dispaly :\n");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}


int* array1(){
	int i,n;
	printf("Enter no ");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	printf("Enter elements :: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	return a;
}*/

void main(){
	const int x=10;
	//int x = 10;
	printf("%d",x);
	x++;
	printf("%d",x);
	x=5;
	printf("%d",x);
}
/*int x = 10;
void change();
void main(){
	printf("%d",x);
	change();
	printf("%d",x);
}
void change(){
	x+=10;
}*/