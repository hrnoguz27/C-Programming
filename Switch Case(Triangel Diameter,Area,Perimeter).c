#include<stdio.h>
int main(void){
	int n;
	float r,aoc,doc,poc;
	printf("Enter the radius of circle(5.5):");
	scanf("%f",&r);
	printf("1) Calculate the Diameter\n2) Calculate the Perimeter\n3) Calculate the Area\n\n");
	printf("Enter your choose:");
	scanf("%d",&n);
	aoc=3.14159*r*r;
	doc=2*r;
	poc=2*3.14159*r;
	
	switch(n){
		case 1:
			printf("\nDiameter of the circle: %.2f",doc);
		break;
		case 2:
			printf("\nPerimeter of the circle: %.2f",poc);
		break;
		case 3:
			printf("\nArea of the circle: %.2f",aoc);
		break;
	}
	return 0;
}
