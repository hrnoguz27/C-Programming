#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printarray(int []);
void maxarray(int[]);
int main(){
	int numbers[10],i;
	srand(time(NULL));
	for(i=0;i<10;i++){
		numbers[i]=rand()%1000+1;
	}
	printarray(numbers);
	maxarray(numbers);
	return 0;
}
void printarray(int num[10]){
	int i;
	for(i=0;i<10;i++){
		printf("%d ",num[i]);
	}
}
void maxarray(int maximum[10]){
	int max,i;
	max=maximum[0];
    for(i=0;i<10;i++){
        if(maximum[i]>max)
            max=maximum[i];
}
printf("\nMaximum number: %d\n",max);
}
