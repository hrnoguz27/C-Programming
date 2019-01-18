#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int flip(void);
int main(void){
	srand(time(NULL));
	int times,heads=0,tails=0;
	printf("Times\t\tHeads\t\tTails");
	for(times=1;times<=100;times++){
		if(flip()==0)
		heads++;
		else
		tails++;
			if(times%100==0){
	printf("\n%d\t\t%d\t\t%d",times,heads,tails);
	tails=0;
	heads=0;}
	}
	return 0;
}
int flip(void){
int i=rand()%2;
if(i==0)
return 0;
else
return 1;
}
