#include<stdio.h>
void maximum(int,int,int);
void minimum(int,int,int);
int main(){
	int x,y,z;
	printf("Enter three integer numbers: ");
	scanf("%d%d%d",&x,&y,&z);
	maximum(x,y,z);
	minimum(x,y,z);
	return 0;
	
}
void maximum(int a,int b,int c){
	int max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("Maximum is %d",max);
}
void minimum(int a,int b,int c){
	int min=a;
	if(b<min)
	min=b;
	if(c<min)
	min=c;
		printf("\nMinimum is %d",min);
}
