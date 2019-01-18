#include<stdio.h>
int main(void)
{
	int n,c,sum=0;
	
printf("Enter an integer number: ");
scanf("%d",&n);
c=1;
while(c<=n){
	sum=sum+c;
		c+=2;
}
	printf("Summation of even numbers from 1 to %d is %d",n,sum);
	return 0;
}
