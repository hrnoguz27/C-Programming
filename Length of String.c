#include<stdio.h>
int main(){
	char name[20];
	int i=0,len=0;
	printf("Enter your name: ");
	scanf("%s",name);
	while(name[i]!='\0'){
		len++;
		i++;
	}
	printf("%d",len);
 return 0;
}
