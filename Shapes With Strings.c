#include<stdio.h>
#include<string.h>
/*
Enter a string: car
       car car
      car   car
     car     car
    car       car
   car         car
  car           car
 car             car
car               car
 car             car
  car           car
   car         car
    car       car
     car     car
      car   car
       car car
       
*/
int main(){
	
	char s[80];
	char z[]=" ";
	int i,x;
	printf("Enter a string: ");
	scanf("%s",s);
	x=10;
	i=1;
		while(x!=strlen(s)){
		printf("%*s",x,s);
		printf("%*s%s\n",i,z,s);
		x--;
		i+=2;
	}
	x=strlen(s);
	while(x!=11){
		printf("%*s",x,s);
		printf("%*s%s\n",i,z,s);
		x++;
		i-=2;
	}
return 0;
}
