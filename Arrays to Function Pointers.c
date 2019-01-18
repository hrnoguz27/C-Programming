#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int[],int);
int min(int[],int);
int total(int[],int);
int (*afptr[3])(int[],int) = {max,min,total}; 
int i;
int main(void){
	int num[10],c;
	srand(time(NULL));
	printf("Numbers Generated:");
	for(i=0;i<10;i++){
		num[i]=rand()%100+1;
		printf("%4d",num[i]);
	}
	
	printf("\n1 Find the maximum number\n2 Find the minimum number\n3 Print the total of the numbers\n");
	printf("Enter a choice: ");
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
	
	return 0;
}
int max(int a[],int b){
	int maxi=a[0];
	
	for(i=1;i<b;i++){
	if(a[i]>maxi)
	maxi=a[i];
}
return maxi;
}
int min(int a[],int b){
	
	int mini=a[0];
	
	for(i=1;i<b;i++){
	if(a[i]<mini)
	mini=a[i];
}
return mini;
	
}
int total(int a[],int b){
	int tot=a[0];
	for(i=1;i<b;i++){
		tot+=a[i];
	}
	return tot;
}
