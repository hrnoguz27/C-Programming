#include<stdio.h>
int powerty(int,int);
int main(){
	int base,power;
	printf("Enter the base:");
	scanf("%d",&base);
	printf("Enter the power:");
	scanf("%d",&power);
	printf("%d th of %d is %d",power,base,powerty(base,power));

	return 0;
}
int powerty(int x,int n){
	if(n==0) return 1;
	return x * powerty(x, n - 1);
}
