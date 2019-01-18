#include<stdio.h>
#include<ctype.h>
void convertTouppercase(char *sPtr);
void convertTolowercase(char *sPtr);
int main(){
	
	int c;
	char string[30];
	printf("Enter the string:");
	scanf("%s",string);
	printf("\nSelection Menu\n1-ConvertToUpper\n2-ConvertToLower\n ");
	scanf("%d",&c);
	
	switch(c){
		
		case 1:
			convertTouppercase(string);
		printf("After Convert  : %s",string);
		break;
		case 2:
			convertTolowercase(string);
			printf("After Convert : %s ",string);
		break;
	}
	
	
	return 0;
}
void convertTouppercase(char *sPtr){
	
	while(*sPtr != '\0'){
		
		if(islower(*sPtr)){
			*sPtr=toupper(*sPtr);
		}
		++sPtr;
	}
}
void convertTolowercase(char *sPtr){
	
	while(*sPtr != '\0'){
		
		if(isupper(*sPtr)){
			*sPtr=tolower(*sPtr);
		}
		++sPtr;
	}
	
	
	
	
}
