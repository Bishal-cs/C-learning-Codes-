#include<stdio.h>
int sum(int);
int rev(int);
int digit(int);
int out(int);
void main(){
	int n,a[10],i,f;
	printf("How many element  :: ");
	scanf("%d",&n);
	printf("arraay elements :: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		f = out(a[i]);
		printf("%d  ",f);
	}
	/*for(i=0;i<n;i++){
		printf("%d",a[i]);
	}*/
}

int out(int y){
	int b;
	b = rev(y) + sum(y);
	return b;
}

int digit(int k){
	int x =1;
	while(k != 0){
		x =x*10;
		k = k/10;
	}
	return x;
}


int sum(int s){
	int j,c =0,k=s;
	while(s !=0){
		j = s%10;
		s = s/10;
		c = c+j;
	}
	int p = c*digit(k);
	printf("\n:::: %d\n",p);
	return p;
}

int rev(int r){
	int k,reverse = 0;
	while(r != 0){
		k = k%10;
		r = r/10;
		reverse = reverse*10 + k;
	}
	return (reverse);
}