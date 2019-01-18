#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5
int sum(int [],int);
void prnt(int [],int);

int main(){
	srand(time(NULL));
	int a[SIZE],i;
	for(i=0;i<SIZE;i++){
		a[i]=rand()%100+1;
	}
	prnt(a,SIZE);
	printf("\nSum is %d",sum(a,SIZE));
	
	return 0;
	
}
int sum(int a[],int size){
	int tot=0,i;
	for(i=0;i<size;i++){
		tot+=a[i];
	}
	return tot;
}

void prnt(int a[],int size){
	int i;
	for(i=0;i<size;i++)
		printf("%d  ",a[i]) ;
	
}
