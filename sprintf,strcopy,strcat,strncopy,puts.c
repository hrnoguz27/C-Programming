#include<stdio.h>
#include<string.h>
int main(){
	char s1[] = "Amasya.";
	char s2[] = "Ankara.";
	char s3[] = "Washington";
	char s4[20];
	sprintf(s4,"%s%s%s%c",s1,s2,s3,'?');
	puts(s4);
	strcpy(s4,s1);
	strcat(s4,s2);
	puts(s4);
	strncpy(&s4[1],&s2[1],5);
	puts(s4);
	strncpy(&s4[8],"nkara",5);
	puts(s4);
	strcat(s4,s3);
	strcat(s4,"?");
	puts(s4);
}
