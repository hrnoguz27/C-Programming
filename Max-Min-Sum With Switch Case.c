#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int [],int);
int min(int [],int);
int total(int [],int);
int (*afptr[3])(int [],int) = {max,min,total};
int main(void){
	int i,c,num[10];
		printf("Numbers Generated: ");
		srand(time(NULL));
		for(i=0;i<10;i++){
			num[i]=rand()%100+1;
			printf("%4d",num[i]);
		}
	printf("\n1 Find the maximum number\n2 Find the minimum number\n3 Print the total of the numbers\nEnter a choice: ");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("Result is %d",(*afptr[0])(num,10));
		break;
		case 2:
			printf("Result is %d",(*afptr[1])(num,10));
		break;
		case 3:
			printf("Result is %d",(*afptr[2])(num,10));
		break;
		default:
			printf("Invalid Entry!");
	}	
}

int max(int a[],int b){
	int max,i=0;
	max=a[i];
	for(i=1;i<b;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int min(int a[],int b){
	int min,i=0;
	min=a[i];
	for(i=1;i<b;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
int total(int a[],int b){
	int tot,i=0;
	tot=a[i];
	for(i=1;i<b;i++){
			tot+=a[i];
		}
	return tot;
}
