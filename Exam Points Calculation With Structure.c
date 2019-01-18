#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct person{
	char name[20];
	char last[20];
	int mid;
	int fin;
	float avg;
};
int main(void){
	person a[5];
	int i;
	float average=0.0;
	for(i=0;i<5;i++){
		printf("Enter %d. Student Name:",i+1);
		scanf("%s",a[i].name);
		printf("Enter %d. Student Last Name:",i+1);
		scanf("%s",a[i].last);
		printf("Enter %d. Student Midterm Point: ",i+1);
		scanf("%d",&a[i].mid);
		printf("Enter %d. Student Final Point: ",i+1);
		scanf("%d",&a[i].fin);
		a[i].avg=(a[i].mid*40/100)+(a[i].fin*60/100);
		average+=a[i].avg;
		}	
		printf("%5s%20s%20s%10s%10s%10s\n","Order","Name","Last Name","Midterm","Final","Average");
	for(i=0;i<5;i++){
		printf("%5d%20s%20s%10d%10d%10.2f\n",i+1,a[i].name,a[i].last,a[i].mid,a[i].fin,a[i].avg);	
	}
	printf("Class Average: %.2f",average/5);
	return 0;
}
