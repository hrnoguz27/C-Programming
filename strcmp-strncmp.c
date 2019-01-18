#include<stdio.h>
#include<string.h>
int main(void){
	
	char fs[]="Apple";
	char ss[]="Application";
	
		/*	<0 -->  firststring < secondstring
			0  -->  firststring = secondstring
			>0 -->  firststring > secondstring	*/
			
		printf("%d\n",strcmp(fs,ss));
		printf("%d\n",strncmp(fs,ss,3));
	
	return 0;
}
