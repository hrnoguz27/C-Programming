#include<stdio.h>
int main(void)
{
	int midterm,final,grade;
	printf("Enter your midterm and final exam results: ");
	scanf("%d%d",&midterm,&final);
	grade=(midterm*40/100)+(final*60/100);
	if(grade>=85){
	printf("Your grade is %d\n",grade);
	printf("Your letter grade is A");
}
else if(grade>=70){
	printf("Your grade is %d\n",grade);
	printf("Your letter grade is B");
}
else if(grade>=60){
	printf("Your grade is %d\n",grade);
	printf("Your letter grade is C");
}
else if(grade>=50){
	printf("Your grade is %d\n",grade);
	printf("Your letter grade is D");
}
else{
	printf("Your grade is %d\n",grade);
	printf("Your letter grade is F");
}
return 0;
}

