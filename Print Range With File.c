#include<stdio.h>
#include<string.h>
#include<conio.h>
void print_list(FILE *fp );
void print_range(FILE *fp, int low, int upp);
struct records{
	char name[50];
	char last[50];
	int age;
	float salary;
}employees;

int main(){
	int i=0,c,low,upp;
	FILE *fPtr;

	if((fPtr=fopen("employee.txt","r"))==NULL){
		printf("File could not be opened!\n");
		return 0;
	}
	printf("Choose from of the Options\n");
	printf("1 - Printing Complete List\n");
	printf("2 - Printing Employees within a Range of Salary\n");
	printf("3 - Press other than 1 or 2 to EXIT\n");
	scanf("%d",&c);
	switch(c){
		case 1:
			print_list(fPtr);	
		break;
		case 2:
			printf("Enter the lower limit: ");
			scanf("%d",&low);
			printf("Enter the upper limit: ");
			scanf("%d",&upp);
			print_range(fPtr,low,upp);		
		break;	
		}
	fclose(fPtr);
	
	return 0;
}
void print_list(FILE *fp){
			do{
				fscanf(fp,"%s%s%d%f\n",employees.name,employees.last,&employees.age,&employees.salary);
				printf("%-20s%-20s%5d%20.2f\n",employees.name,employees.last,employees.age,employees.salary);
			  } while(!feof(fp));
			
			fclose(fp);
	}
void print_range(FILE *fp, int low, int upp){
		printf("%-20s%-20s%5s%20s\n","NAME","LAST NAME","AGE","SALARY");
		do{
			fscanf(fp,"%s%s%d%f\n",employees.name,employees.last,&employees.age,&employees.salary);
			if(low<=employees.salary && upp>=employees.salary){
			printf("%-20s%-20s%5d%20.2f\n",employees.name,employees.last,employees.age,employees.salary);
		}
		} while(!feof(fp));
		
		printf("\nEmployee with numbers between %d and %d is not found!",low,upp);
}	//End of Function
