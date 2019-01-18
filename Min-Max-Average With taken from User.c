#include<stdio.h>
int main(){
	int i,min,max,tot,num,hmn;
	float average;
	printf("How many number of integer to be processed: ");
	scanf("%d",&hmn);
	printf("Enter an integer:");
	scanf("%d",&num);
	tot=num;
	min=num;
	max=num;
	for(i=1;i<=hmn-1;i++){
		printf("Enter next integer: ");
		scanf("%d",&num);
		tot+=num;
		if(num>max){
			max=num;
		}
		if(num<min){
			min=num;
		}
	}
	average=(float)tot/hmn;
	printf("The smallest is %d\n",min);
	printf("The largest is %d\n",max);
	printf("The Average is %.2f",average);
}
