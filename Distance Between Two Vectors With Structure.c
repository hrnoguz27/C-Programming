#include<stdio.h>
#include<math.h>
typedef struct point {
	float x;
	float y;
};
float distance(point x, point y);
int main(){
	point x;
	point y;
	float result;
	printf("Enter X1 and Y1:");
	scanf("%f%f",&x.x,&x.y);
	printf("Enter X2 and Y2:");
	scanf("%f%f",&y.x,&y.y);
	result=distance(x,y);
	printf("\n%f",result);
	return 0;
}
float distance(point x, point y){
	return sqrt((y.x-x.x)*(y.x-x.x)+(y.y-x.y)*(y.y-x.y));
}
