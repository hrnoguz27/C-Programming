#include<stdio.h>
int fact(int a){
	int i,fct=1;
	for(i=1;i<=a;i++){
		fct*=i;
	}
	return fct;
}
int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
	return 0;
}



