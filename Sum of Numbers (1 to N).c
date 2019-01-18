#include<stdio.h>
int summation(int);
int main(){
	int number;
	printf("Enter a positive integer number: ");
	scanf("%d",&number);
	summation(number);
return 0;
}
int summation(int x){
	int i,sum=0;
	for(i=1;i<=x;i++){
		sum+=i;
	}
	printf("Sum of the numbers from 1 to %d is %d",x,sum);
}
