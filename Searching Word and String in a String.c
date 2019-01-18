#include<stdio.h>
#include<string.h>
int nwords(char [],char []);
int nchars(char [],char b);
int main(){
	
	char word[10];
	char ch;
	int x,y;
	char str[]="This is an apple. This is an orange.";
	printf("Enter a word to be searched: ");
	gets(word);
	printf("Enter a character to be searched: ");
	scanf("%c",&ch);
	x=nwords(str,word);
	y=nchars(str,ch);
	printf("There are %d \"%s\" in the string. \n",x,word);
	printf("There are %d \"%c\" in the string. ",y,ch);
	
	getchar();
	return 0;
}
int nwords(char a[], char b[]){
	
	char *ptr;
	int i=0;
	ptr=a;
	while(strstr(ptr,b)!=NULL){
	i++;
	ptr=strstr(ptr,b);
	ptr++;
	}
	return i;
}
int nchars(char a[],char b){
	char *ptr;
	int i=0;
	ptr=a;
	while(strchr(ptr,b)!=NULL){
		
			i++;
			ptr=(strchr(ptr,b));
			ptr++;
				
	}
	return i;
}

