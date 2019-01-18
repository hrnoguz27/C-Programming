#include<stdio.h>
#include<string.h>
#include<conio.h>
struct records{
	int id;
	char name[50];
	char last[50];
	int age;
	float salary;
};
void num_of_record(FILE *fp);
void search_id(FILE *fp, int low, int upp);
void search_name(FILE *fp, char *name);
void add_record(FILE *fp);
void delete_record(FILE *fp, int id);

int main(void){
	
	int opt;
	int low,upp,id;
	int i=0;
	char *name;
	FILE *fPtr;
	struct records employees[10]={{1,"Evonne","Koen",33,1500.5},{2,"Jana","Loehr",36,3300},{3,"Krystyna","Dunford",29,1200.75},
	{4,"Maris","Pinney",39,2900},{5,"Roscoe","Cutsforth",27,3250},{6,"Chester","Patrick",34,2225.25},{7,"Detra","Tagle",32,2750.5},
	{8,"Deadra","Palmieri",35,2600.25},{9,"Andre","Rodman",30,3750.5},{10,"Sharen","Mcelfresh",36,2425.25},};

	if((fPtr=fopen("employee.txt","r+"))==NULL){
		printf("File could not be opened!\n");
		
		return 0;
	}
	while(i<10){
		fprintf(fPtr,"%3d%15s%15s%3d%10.2f\n",employees[i].id,employees[i].name,employees[i].last,employees[i].age,employees[i].salary);
		i++;
	}
	fclose(fPtr);
		
	if((fPtr=fopen("employee.txt","r+"))==NULL){
		printf("File could not be opened!\n");
		
		return 0;
	}
while(1){
	rewind(fPtr);
	printf("\n\nPlease Choose from one of the following Options: \n");
	printf("1.Display Number of Records\n");
	printf("2.Search Record by Employee ID\n");
	printf("3.Search Record by Employee Name\n");
	printf("4.Add New Employee Record\n");
	printf("5.Delete Record of Employee for given Employee ID\n");
	printf("__Exit (int other than 1-5)\n\n");
	printf("Enter Your Choice:");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			num_of_record(fPtr);
		break;
		case 2:
			printf("Enter Employee Lower: ");
			scanf("%d",&low);
			printf("Enter Employee Upper: ");
			scanf("%d",&upp);
			search_id(fPtr,low,upp);
		break;
		case 3:
			printf("Enter Employee Name: ");
			scanf("%s",name);
			search_name(fPtr,name);
		break;
		case 4:
			add_record(fPtr);
			fclose(fPtr);
			fPtr = fopen("employee.txt","r+");
		break;
		case 5:
			printf("Enter the Employee ID to delete:");
			scanf("%d",&id);
			delete_record(fPtr,id);
			fPtr = fopen("employee.txt","r+");
		break;
		default:
			fclose(fPtr);
			return 0;
		break;
	}
}
return 0;
} //End of Main
void num_of_record(FILE *fp){
	int num=0;
	struct records employee;
	do{
		fscanf(fp,"%d%s%s%d%f\n",&employee.id,employee.name,employee.last,
		&employee.age,&employee.salary);
		num++;
		printf("%3d%15s%15s%3d%10.2f\n",employee.id,employee.name,employee.last,
		employee.age,employee.salary);		
	} while(!feof(fp));
	printf("Number of Records is %d.",num);
	printf("\nPress Any Key to Continue!");
	getch();
}	//End of Function
void search_id(FILE *fp, int low, int upp){
	struct records employee;
	int i;
	do{
		fscanf(fp,"%d%s%s%d%f\n",&employee.id,employee.name,employee.last,&employee.age,&employee.salary);
		for(i=0;i<10;i++){
		
		if(low<=employee[i].salary && upp>=employee[i].salary){
			printf("%-15s%15s%15s%15s\n%-15s%15s%-3d%-15s%-.2f\n","EMPLOYEE NAME","EMP. LAST NAME","EMPLOYEE AGE","EMPLOYEE SALARY",employee[i].name,employee[i].last,employee[i].age,employee[i].salary);
		}
			printf("\nPress Any Key to Continue!");
			getch();
		}
		} while(!feof(fp));
		printf("\nEmployee with numbers between %d and %d is not found!",low,upp);
		printf("\nPress Any Key to Continue!");
		getch();
}	//End of Function
void search_name(FILE *fp, char *name){
	struct records employee;
	int found=0;
	do{
		fscanf(fp,"%d%s%s%d%f\n",&employee.id,employee.name,employee.last,&employee.age,&employee.salary);
		if(!strcmp(name,employee.name)){
			printf("%-15s:%-3d\n%-15s:%-15s\n%-15s:%-15s\n%-15s:%-3d\n%-15s:%-.2f\n","EMPLOYEE ID",employee.id,"EMPLOYEE NAME",employee.name,"EMP. LAST NAME",employee.last,"EMPLOYEE AGE",employee.age,"EMPLOYEE SALARY",employee.salary);
			found=1;
		}
		}while(!feof(fp));
		if(found==0){
			printf("\nEmployee with ID number %d is not found!",name);
		}
		
		printf("\nPress Any Ket to Continue!");
		getch();
}	//End of Function
void add_record(FILE *fp){
	struct records temp;
	while(getc(fp) != EOF);
	printf("Enter New Record ID:");
	scanf("%d",&temp.id);
	printf("Enter New Record Name:");
	scanf("%s",&temp.name);
	printf("Enter New Record Last Name:");
	scanf("%s",&temp.last);
	printf("Enter New Record Age:");
	scanf("%d",&temp.age);
	printf("Enter New Record Salary:");
	scanf("%f",&temp.salary);
	fprintf(fp,"%3d%15s%15s%3d%10.2f\n",temp.id,temp.name,temp.last,temp.age,temp.salary);
	printf("\nPress Any Key to Continue!");
	getch();
}	//End of Function
void delete_record(FILE *fp, int id){
	FILE *ftemp;
	if((ftemp = fopen("temp.temp","w"))==NULL){
		printf("Temp File Can not be Created!\n");
		return ;
	}
	struct records employee;
	do{
		fscanf(fp,"%d%s%s%d%f\n",&employee.id,&employee.name,&employee.last,&employee.age,&employee.salary);
		if(id != employee.id){
			fprintf(ftemp,"%3d%15s%15s%3d%10.2f\n",&employee.id,&employee.name,&employee.last,&employee.age,&employee.salary);
		}
	}while(!feof(fp));
	fclose(fp);
	fclose(ftemp);
	remove("employee.txt");
	rename("temp.temp","employee.txt");
	printf("Record Deleted! Press Any Key to Continue");
	getch();
}	//End of Function
