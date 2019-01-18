#include<stdio.h>
void strcopy(char *str1,char *str2);
int main(){
	char str1[80],str2[80],temp[80];
	printf("Please enter two strings: ");
	scanf("%s%s",str1,str2);
	printf("Strings before swapping: %s\t%s",str1,str2);
	strcopy(temp,str1);
	strcopy(str1,str2);
	strcopy(str2,temp);
	printf("\nStrings after swapping: %s\t%s",str1,str2);
	return 0;
}

void strcopy(char *strc1, char *strc2){
		
		while(*strc2!='\0')
		
	{

       	*strc1=*strc2;
       	*strc1++;
       	*strc2++;
	}
	*strc1='\0';
}
