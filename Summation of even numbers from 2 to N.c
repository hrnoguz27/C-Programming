#include<stdio.h>
int main(void)
{
	int n,c,sum=0;
	
printf("Enter an integer number: ");
scanf("%d",&n);
c=2;
while(c<=n){
	sum=sum+c;
		c+=2;
}
	printf("Summation of even numbers from 2 to %d is %d",n,sum);
	return 0;
}
