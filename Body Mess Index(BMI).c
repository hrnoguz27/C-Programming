#include<stdio.h>
int main(void)
{
float height,weight,BMI;

printf("Please, Enter your HEIGHT(m)\n");
scanf("%f",&height);
printf("\nPlease, Enter your WEIGHT(kg)\n");
scanf("%f",&weight);
BMI = weight/(height*height);
printf("Your BMI is %f\n\n",BMI);
if(BMI<18.5){
	printf("UNDERWEIGHT");
}

else if(BMI<24.9){
printf("NORMAL WEIGHT");

}
else if(BMI<29.9){
	printf("OVERWEIGHT");
}
else
{
	printf("OBESE!");
}
return 0;

}
