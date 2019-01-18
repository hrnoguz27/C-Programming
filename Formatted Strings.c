#include<stdio.h>
#include<string.h>
int main(){
	
	char city[10][80]={"Gaziantep","Sinop","Kayseri","Kahramanmaras","Denizli","Istanbul","Kilis","Osmaniye","Izmir","Bayburt"};
	int num[10]={27,67,38,46,20,34,79,80,35,69};
	
	int i;
	
	for(i=0;i<10;i++){
		printf("%s%*d\t",city[i],20-strlen(city[i]),num[i]);
		printf("%*s%d\t",20,city[i],num[i]);
		printf("%*s%*d\n",20,city[i],10,num[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
			printf("%*s%*d\n",(40+strlen(city[i]))/2,city[i],35-(40+strlen(city[i]))/2,num[i]);
	}
	return 0;
	
}
