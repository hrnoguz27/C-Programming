#include<stdio.h>
void multiplyarray(int []);
void multiplyelement(int []);
int main(){
	int numbers[20],num;
	for(int c=0;c<20;c++){
		printf("Enter number:");
		scanf("%d",&num);
		numbers[c]=num;
	}
	for(int a=0;a<10;a++){
		printf("\n%d",numbers[a]);
	}
	multiplyarray(numbers);
	multiplyelement(numbers);
	return 0;
}
void multiplyarray(int a[]){
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",a[i]*2);
		
	}
	
}
void multiplyelement(int a[]){
	int we;
	printf("What element do you want multiply:");
	scanf("%d",&we);
	printf("%d",a[we]*2);
	}


