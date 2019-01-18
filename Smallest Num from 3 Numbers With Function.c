#include<stdio.h>
 
float smallestnum(float,float,float); 
 
int main(void) {
    float x,y,z;
printf("Enter three numbers:");
scanf("%f%f%f",&x,&y,&z);
printf("Smallest number is %.1f",smallestnum(x,y,z));
  
    return 0;
}
 
 
 	float smallestnum(float x,float y,float z){
 	float smallestnum=x;
	 if(y<smallestnum) 
	 smallestnum=y;
	 if(z<smallestnum) 
	 smallestnum=z;
	 return smallestnum;	 }

