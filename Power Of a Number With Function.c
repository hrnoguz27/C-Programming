#include<stdio.h>
int powerty(int,int);
int main(){
	int base,power;
	printf("Enter the base number: ");
	scanf("%d",&base);
	printf("Enter the power: ");
	scanf("%d",&power);
	powerty(base,power);
}
int powerty(int b,int p){
	int res=1,i;
	for(i=1;i<=p;i++){
		res*=b;
	}
	printf("Result: %d",res);
}
