#include<stdio.h>
/*
Enter a String: USA

UUU
SS
A
A
SS
UUU

*/
int strln(char []);
void prntstr(char []);
void prntinvstr(char []);
int main(){
	char str[30];
	printf("Enter a String: ");
	scanf("%s",str);
printf("\nCalling strln\n");
printf("%d\n" ,strln(str));
printf("\nCalling prntstr\n");
prntstr(str);
printf("\nCalling prntinvstr\n");
prntinvstr(str);
return 0;
}

int strln(char a[]){
	int i=0,l=0;
	while( a[i] != '\0'){
		l++;
		i++;
	}
	return l;
}

void prntstr(char a[]){
	for(int i=0;i<strln(a);i++){
		for(int j=strln(a)-i-1;j>=0;j--){
			printf("%c" ,a[i]);
		}
		printf("\n");
	}
}

void prntinvstr(char a[]){
	for(int i=strln(a);i>=0;i--){
		for(int j=strln(a)-i-1;j>=0;j--){
			printf("%c" ,a[i]);
		}
		printf("\n");
}
}
