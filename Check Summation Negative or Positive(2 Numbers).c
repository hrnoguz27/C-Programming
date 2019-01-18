#include<stdio.h>
int main(void)
{
	int a,b,sum;
	printf("Please enter an two integer number..");
	scanf("%d%d",&a,&b);
	sum=a+b;
	if(sum<0){
		printf("Sum is %d and this number is negative...",sum);
	}
	if(sum>0){
		printf("Sum is %d and this number is positive...",sum); 
	}
	return 0;
}
