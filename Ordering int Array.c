#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
void asort (int [],int);
void dsort (int [],int);
int main(){
	
	int strt[SIZE];
	int i,c;
	srand(time(NULL));
	
	printf("Array in original order :");
	for(i=0;i<10;i++){
		strt[i]=rand()%100+1;
		printf("%d ",strt[i]);
	}
	printf("\n1-Ascending\n2-Descending\nPlease Enter Your Choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
		asort(strt,SIZE);
			break;
		case 2:
			dsort(strt,SIZE);
			break;
		default:
			printf("Invalid Entry!");

}
}

void asort (int a[],int b)
{
int hold,i,j;
for(i=1;i<=b-1;i++){
	for(j=0;j<b-1;j++){
		if(a[j]>a[j+1]){
			
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
		}
	}
	}
	printf("Array after Sorting: ");
		for(i=0;i<b;i++){
	printf("%d ",a[i]);
	}
}

void dsort (int a[],int b){
	int hold,i,j;
	printf("Array after sorting: ");
	for(i=0;i<=b-1;i++){
	for(j=0;j<b-1;j++){
		if(a[j]<a[j+1]){
			
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
		}
	}
}
	for(i=0;i<b;i++){
	printf("%d ",a[i]);
	}
		
}

