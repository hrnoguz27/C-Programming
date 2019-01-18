#include<stdio.h>
int fact(int);
int main(void){
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	printf("Factorial of %d is %d",number,fact(number));
return 0;
}

int fact(int x){
	int i,fct=1;
	for(i=1;i<=x;i++){
		fct*=i;
	}
	return fct;
}

