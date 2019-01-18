#include<stdio.h>
int main(void)
{
	int fact=1,i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		fact*=i;
		i++;
	}
	printf("Factorial of %d is %d",n,fact);
	
	return 0;
}
