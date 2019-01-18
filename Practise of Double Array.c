#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
	
	char name[5][20];
	char surname[5][20];
	int exam[5][3];
	float grade[5];
	int c,i,j;
	float classaverage=0.0;	
	for(i=0;i<5;i++){
	printf("Enter Student's Name and Surname: ");
	scanf("%s%s",name[i],surname[i]);
	if(name[i][j]=='\0'&& surname[i][j]=='\0'){
		break;
 		}
 	}
 	
 	srand(time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			exam[i][j]=rand()%100+1;
		}
	}
	for(i=0;i<5;i++){
			grade[i]=(((float)exam[i][0]*30)/100)+(((float)exam[i][1]*30)/100)+(((float)exam[i][2]*30)/100);
			classaverage+=grade[i];
		}
	printf("Class Average: %.2f\n",classaverage/5);
	

for(i=0;i<5;i++){
	
	for(j=0;j<20;j++){
	printf("%c",name[i][j]);
	if(name[i][j]=='\0')
	break;
		}
		printf("\t");
		for(j=0;j<20;j++){
	printf("%c",surname[i][j]);
	if(surname[i][j]=='\0')
	break;
	}
	for(j=0;j<3;j++){
		printf("\t%d",exam[i][j]);
	}
	
	printf("\t%.2f",grade[i]);
	printf("\n");

}

return 0;
}
