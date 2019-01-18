#include<stdio.h>
int main(void)
{
	int n,sum,counter=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	sum=0;
	while(counter<=n){
	if(counter%2==1)
	sum=sum+(counter*counter);
counter++;	
	}
printf("Sum of the squares of the odd numbers from 1 to %d is %d",n,sum);
	
	
	
	
	
	
	return 0;
}
