#include<stdio.h>
#include<string.h>
int main(void){
	
	char add[]="Mecidiyekoy Mahallesi Mecit Bulvarý";
	char *ptr;
	
	ptr=strstr(add,"koy");
	
	if(ptr != NULL){   // You can use '\0' or NULL
		printf("Start-Point %d",ptr-add);
	}
	else{
		printf("Not founded");
	}
	
	return 0;
}












int nchars(char [],char b);
