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
	if(x==1 || x==0){
		return 1;
	}
	else{
	return x*fact(x-1);
}
}

