#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
	srand(time(NULL));
	int i;
	for(i=1;i<=10;i++){
		printf("%d\t%d\n",i,rand()%100+1);
	}
	return 0;
}
