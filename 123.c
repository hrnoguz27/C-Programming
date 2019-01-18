#include<stdio.h>
/*
*
**
***
****
*****
*/
int main(void)
{
int n,r,c;
printf("Enter size of triangel: \n");
scanf("%d",&n);
r=1;
while(r<=n){
	c=1;
	while(c<=r){
		printf("*");
		c++;
	}
	r++;
	printf("\n");
	
}
	return 0;
}
