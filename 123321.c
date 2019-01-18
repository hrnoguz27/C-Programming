#include<stdio.h>
/*
Enter a number: 5
1
22
333
4444
55555
4444
333
22
1
*/
int main(void)
{
	int n,r,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	r=1;
	while(r<=n){
		c=1;
		while(c<=r){
			printf("%d",r);
			c++;
		}
		printf("\n");
		r++;
		
	}
	r=2;
	while(r<=n){
		c=1;
		while(c<=n-r+1){
			printf("%d",n-r+1);
			c++;
		}
		printf("\n");
		r++;
	}
	return 0;
}
