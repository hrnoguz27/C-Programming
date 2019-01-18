#include<stdio.h>
#include<math.h>
int main(){
float xc,yc,pi=3.141592,mag,dir;
printf("Enter the x- and y- components: ");
scanf("%f%f",&xc,&yc);
mag=sqrt((xc*xc)+(yc*yc));
dir=(atan(yc/xc))*180/pi;
printf("\nMagnitute is %.2f\n",mag);

if(xc>0 && yc>0){
	printf("Direction is %.2f -in the first quadrant\n",dir);
}
else if(xc<0 && yc>0){
	printf("Direction is %.2f -in the second quadrant\n",dir+180);
}
else if(xc<0 && yc<0){
	printf("Direction is %.2f -in the third quadrant\n",dir+180);
}
else if(xc>0 && yc<0){
	printf("Direction is %.2f -in the fourth quadrant\n",dir+360);
}
else if(xc==0 && yc<0){
	printf("Direction is %.2f -Along the -y axis\n",dir);
}
else if(xc==0 && yc>0){
	printf("Direction is %.2f -Along the y axis\n",dir);
}
else if(xc<0 && yc==0){
	printf("Direction is %.2f -Along the -x axis\n",dir);
}
else if(xc>0 && yc==0){
	printf("Direction is %.2f -Along the x axis\n",dir);
}

return 0;

}
