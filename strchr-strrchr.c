#include<stdio.h>
#include<string.h>
int main(void){
	
	char add[]="Mecidiyekoy Mahallesi Mecit Bulvarý";
	
	char *firstpoint,*lastpoint;
	
	firstpoint=strchr(add,'a');
	lastpoint=strrchr(add,'a');
	
	if(firstpoint != NULL){
		
		printf("First Position which it is seen %d \n",firstpoint-add);
		printf("Last Position which it is seen %d",lastpoint-add);
	}
	else{
		printf("Not Founded");
	}
	
	return 0;
}
