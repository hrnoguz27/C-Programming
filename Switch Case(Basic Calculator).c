#include<stdio.h>
int main(void){
	int num1,num2;
	char ch;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("Please choose the calculation you want to do(+,-,*,/): ");
	scanf("%c",&ch);
	ch=getchar();
	switch(ch){
		
		case '+':
		    printf("\nThe result of %d%c%d is %d",num1,ch,num2,num1+num2);
		break;
		case '-':
			printf("\nThe result of %d%c%d is %d",num1,ch,num2,num1-num2);
		break;
		case '*':
			printf("\nThe result of %d%c%d is %d",num1,ch,num2,num1*num2);
		break;
		case '/':
			printf("\nThe result of %d%c%d is %d",num1,ch,num2,num1/num2);
		break;
		default:
			printf("\nInvalid Entry!");
	}
	
return 0;
}
