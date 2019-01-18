#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
int first,next,i,min,max;
float sum;
srand(time(NULL));
	printf("Generate Numbers\n");
	first=rand()%100+1;
	i=1;
	printf("%d\t%d\n",i,first);
	min=first;
	max=first;
	sum=first;
for(i=2;i<=10;i++){
    next=rand()%100+1;
	printf("%d\t%d\n",i,next);
		
	if(next<min) {
	min=next;}
	if(next>max){
	max=next;}
	sum+=next;
}


	printf("Minimum Number: %d\n",min);
	printf("Maximum Number: %d\n",max);
	printf("Average of Generated Numbers:%.2f",(sum/10));

}
