#include<stdio.h>
int sum(int);
int main(){
	int n;
	printf("Enter a positive integer number: ");
	scanf("%d",&n);
printf("Sum of the numbers from 1 to %d is %d",n,sum(n));
	return 0;
}
int sum(int x){
	if(x==1) return 1;
	return x+sum(x-1);
}
