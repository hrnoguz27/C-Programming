#include<stdio.h>
int main(){
	char string1[20];
	char string2[]="Welcome to Gaziantep";
	int len1=0,len2=0,i;
	printf("Enter a String: ");
	scanf("%s",string1);
	while(string1[len1]!='\0'){
		len1++;
	}
	while(string2[len2]!='\0'){
		len2++;
			}
			
			printf("%s\n",string1);
			for(i=0;i<len1;i++){
				printf("%c ",string1[i]);
			}
			printf("\n%s\n",string2);
			for(i=0;i<len2;i++){
				printf("%c",string2[i]);
			}
			
			
			return 0;
}
