#include<stdio.h>
int main(){
	char name[20];
	int i,lenght=0;
	printf("Enter your name: ");
	scanf("%s",name);
	while(name[lenght]!='\0'){
		lenght++;
	}
	for(i=lenght-1;i>=0;i--){
	printf("%c",name[i]);
}
	return 0;
}
