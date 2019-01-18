#include<stdio.h>
#include<string.h>
int main(){
	char z[9];
	
	printf("%*.*f",10,2,1.2345);
	printf("%20.5d",2465464);
	printf("\n%.4g",123.96542);
	printf("\n%.7s","happy");
	printf("\n%+010d",21545);
	printf("\n% d",21545);
	printf("\n% +d",21545);
	printf("\n%010d",21545);
	printf("\n%10.3s\n","Happy");
	printf("\n%#o",412);
	
}
