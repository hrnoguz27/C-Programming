#include<stdio.h>
#include<string.h>
int main(void){
	
	char name[10];
	
	char c = 'c';
	printf("ptr: %p,\t value: %c,\t and also address: %zu and %u and \n",&c, c,&c,*c);
	printf("Enter Your Name: ");
	gets(name);
	printf("%s\n",name);
	printf("%20s\n",name);
	printf("%20.5s\n",name);
	printf("%-20.3s",name);
	

	return 0;
}
