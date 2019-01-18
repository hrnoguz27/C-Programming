#include<stdio.h>
/*
Hollow Square

* * * * *
*       *
*       *
*       *
* * * * *

*/
int main(void){
	int r,c,n;
	printf("Enter the size of shape:");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(c=1;c<=n;c++){
			if(c==1||c==n||r==1||r==n){
				printf("* ");}
				else
				printf("  ");
			
		}
		printf("\n");
	}
	return 0;
}
