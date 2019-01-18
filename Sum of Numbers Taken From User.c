#include<stdio.h>
int main(){
	int i,numbers,size,total=0;
	printf("How many numbers did you entered?  ");
	scanf("%d",&size);
	for(i=1;i<=size;i++){
		printf("Enter the Number:");
		scanf("%d",&numbers);
		total+=numbers;
	}
	printf("Sum of the %d value is %d",size,total);
	return 0;
}
