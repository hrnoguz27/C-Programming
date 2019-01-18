#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>    
typedef struct city_records{  
	char name[20];   
	int plate;  
} City_Records; 
void sort (City_Records a[] , int size);   
int main(){ 
	 City_Records  ct[20]={{"Gaziantep",27},{"Sinop",67},{"Kayseri",38},{"Kahramanmaras",46},{"Denizli",20},{"Istanbul",34},{"Kilis",
	 79},{"Osmaniye",80},{"Izmir",35},{"Bayburt",69},{"Gaziantep",27},{"Sinop",67},{"Kayseri",38},{"Kahramanmaras",46},{"Denizli",20},{"Istanbul",34},{"Kilis",
	 79},{"Osmaniye",80},{"Izmir",35},{"Bayburt",69}}; 
	 int i;  
	 for(i=0;i<20;i++){     
	 	printf("%-20s%5d\n",ct[i].name,ct[i].plate);      
	}
	 	sort(ct,20) ;       
	 	printf("\n\n");      
	for(i=0;i<20;i++){
	    printf("%-20s%5d\n",ct[i].name,ct[i].plate);             
	}
	return 0;  
 }
 void sort (City_Records a[] , int size){     
 int i,repeat;        
 City_Records hold;       
 for(repeat=0; repeat < size-1; repeat++){      
 	for(i=0; i < size-1; i++){       
 			if(strcmp(a[i].name , a[i+1].name) > 0 ) {       
					hold = a[i];       
					a[i] = a[i+1];       
					a[i+1] = hold;      
			} // End if       
		} // End of i repetition       
	} // End of repeat repetition       
} // End of function

