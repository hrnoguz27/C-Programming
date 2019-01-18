#include<stdio.h>
void evens(void);
void odds(void);
int main(){
	evens();
	odds();
}
void evens(void){
	int i;
	for(i=1;i<=100;i++){
		if(i%2==0)
		printf("%d\t",i);
	}
	printf("\n\n\n");
}
void odds(void){
	int i;
	for(i=1;i<=100;i++){
		if(i%2==1)
		printf("%d\t",i);
	}
}
