#include<stdio.h>
// Lowest Common Multiple.
int lcm(int,int,int);
int main(){
	int n1,n2,n3;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("LCM of %d,%d and %d is %d",n1,n2,n3,lcm(n1,n2,n3));
	return 0;
}
int lcm(int x,int y,int z){
	int i;
	int max=x;
	if(y>max) max=y;
	if(z>max) max=z;
	for(i=max;i<=x*y*z;i++){
		if(i%x==0 && i%y==0 && i%z==0) return i;
	}
}
