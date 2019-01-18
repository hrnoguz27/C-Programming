#include<stdio.h>
int main(void){
	char g;
	printf("Enter Letter Grade(A-F):");
	g=getchar();
	switch(g){
		case 'a':
		case 'A':
		printf("Excellent");
		break;
		case 'b':
		case 'B':
	        printf("Very Good");
		break;
		case 'c':
		case 'C':
			printf("Average");
		break;
		case 'd':
		case 'D':
			printf("Pass");
		break;
		case 'f':
		case 'F':
			printf("Fail");
		break;
		default:
			printf("Invalid Entry");
	}
	
	return 0;
}
