#include<stdio.h>
#include<string.h>
int main(void){
	
	char name[]="Harun";
	char copy[10];
	char surname[]={'O','g','u','z','\0'};
	
	strcpy(copy,name);
	printf("%s\n",copy);
	
	strncpy(surname,name,3);
	printf("%s\n",surname);
	
	strcpy(surname,copy);
	puts(surname);
	
	strncpy(name,surname,5);
	puts(name);
	return 0;
	
}
