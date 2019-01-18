#include<stdio.h>
int main(){
	int i,power,base,res=1;
	printf("Enter the base number: ");
	scanf("%d",&base);
	printf("Enter the power: ");
	scanf("%d",&power);
	
	for(i=1;i<=power;i++){
		res*=base;
	}
	printf("%d th power of %d is %d",power,base,res);
}
