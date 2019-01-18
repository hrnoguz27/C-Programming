#include<stdio.h>
/*
Please enter two integer numbers: 5 8

55555
666666
7777777
88888888

*/
int main(void)
{
	int a,b,r,c;
printf("Please enter two integer numbers: \n");
scanf("%d%d",&a,&b);
if(a<b){
	r=a;
	while(r<=b){
		c=1;
		while(c<=r){
			printf("%d",a);
			c++;}
		a++;
		r++;
		printf("\n");}
}	
else
{
	r=b;
	while(r<=a){
		c=1;
		while(c<=r){
			printf("%d",b);
			c++;}
		b++;
		r++;
		printf("\n");}
}	
	return 0;
}
