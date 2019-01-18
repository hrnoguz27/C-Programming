#include<stdio.h>
#include<string.h>
int main(void){
	
	char name[10];
	char surname[10];
	char namesurname[12 ];
	char name1[]="Harun";
	char name2[]="Sedef";
	char name3[]="Ilayda";
	printf("Enter your name: ");
	gets(name);
	printf("Enter your surname: ");
	gets(surname);
	
	strcat(namesurname,name);
	strcat(namesurname," ");
	strcat(namesurname,surname);
	printf("You are ");
	puts(namesurname);
	
	strncat(name1,name2,3);
	puts(name1);
	strncat(name3,name1,6);
	puts(name3);
	strncat(name2,name3,4);
	puts(name2);
	
	return 0;
}
