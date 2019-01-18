#include<stdio.h>
int main(void){
	
	char name[5][20];
	char surname[5][20];
	int exam[5][3];
	float tot=0;
	int i;
	for(i=0;i<5;i++){
	printf("Enter Student's %dth Name: ",i+1);
	gets(name[i]);
	printf("\n");
	printf("Enter Student's %dth Lastname: ",i+1);
	gets(surname[i]);
	}
	
	for(i=0;i<5;i++){
			printf("Enter %dth Student's Midterm: ",i+1);
			scanf("%d",&exam[i][0]);
			printf("\n");
			printf("Enter %dth Student's Final: ",i+1);
			scanf("%d",&exam[i][1]);
	
			exam[i][2]=exam[i][0]*40/100+exam[i][1]*60/100;
		}
		printf("%5s%20s%20s%10s%7s%5s","Order","Name","Surname","Midterm","Final","Avg");
		printf("\n");
			for(i=0;i<5;i++){
				printf("%5d%20s%20s%10d%7d%5d\n",i+1,name[i],surname[i],exam[i][0],exam[i][1],exam[i][2]);
			}
for(i=0;i<5;i++){
	tot=tot+exam[i][2];
}
printf("Class Average: %.2f\n",(float)tot/5);

return 0;
}

