#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int main(){
	int num[SIZE],i;
	srand(time(NULL));
	for(i=0;i<SIZE;i++){
		num[i]=rand()%1000+1;
	}
	for(i=0;i<SIZE;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
