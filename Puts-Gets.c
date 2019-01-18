#include<stdio.h>
#include<string.h>
int main(void){
	
	char name[10];
	char surname[10];
	printf("Enter name: ");
	gets(name);
	puts(name);
	printf("Enter surname: ");
	gets(surname); 
	puts(surname);
	printf("%s %s",name,surname);
	return 0;
}
