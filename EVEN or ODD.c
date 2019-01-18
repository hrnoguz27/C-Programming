#include<stdio.h>
int main(void)
{
	int a;
	printf("Enter an integer number: ");
	scanf("%d",&a);
	
	if(a==0)
	printf("Entered number is ZERO");
	
	else if(a%2==0)
	printf("Entered number is EVEN");
	
	else
	printf("Entered number is ODD");	
	
	return 0;
}
