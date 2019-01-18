#include<stdio.h>
int plus(int,int);
int mines(int,int);
int multiple(int,int);
float divided(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("A+B=%d\n",plus(a,b));
	printf("A-B=%d\n",mines(a,b));
	printf("A*B=%d\n",multiple(a,b));
	printf("A/B=%.2f",divided(a,b));
}
int plus(int x,int y){
	return x+y;
}
int mines(int x,int y){
	return x-y;
}
int multiple(int x,int y){
	return x*y;
}
float divided(int x,int y){
	if(y==0){
		return 0;
	}
	else{
	return float(x)/float(y);
}
}
