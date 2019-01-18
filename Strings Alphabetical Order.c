#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(void){
	
	char name[10][80];
	char temp2[80];
	int age[10];
	int size,i,j;
	printf("How many personal info to be entered(MAX 10) ? ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter %d. Name and Age: ",i+1);
		scanf("%s%d",name[i],&age[i]);
	}
	for(j=0;j<size;j++){
	for(i=0;i<size-1;i++){
		if(strcmp(name[i+1],name[i])<0){
				int temp=age[i];
				age[i]=age[i+1];
				age[i+1]=temp;
				
				strcpy(temp2,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],temp2);
					}
						}
							}
	for(i=0;i<size;i++){
		printf("%s\t%d\n",name[i],age[i]);
 }
	
	return 0;
}
