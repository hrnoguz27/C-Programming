#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE1 3
#define SIZE2 3
int main(){
	
	int ma[SIZE1][SIZE2],mb[SIZE1][SIZE2],ms[SIZE1][SIZE2],i,j,k;
	srand(time(NULL));
	printf("Matrix A:\n");
	for(i=0;i<SIZE1;i++){
		for(j=0;j<SIZE2;j++){
			ma[i][j]=rand()%10+1;
			printf("%5d",ma[i][j]);
		}
		printf("\n\n");
	}
	printf("Matrix B:\n");
	for(i=0;i<SIZE1;i++){
		for(j=0;j<SIZE2;j++){
			mb[i][j]=rand()%10+1;
			printf("%5d",mb[i][j]);
		}
		printf("\n\n");
	}
	printf("Matrix C=2A+3B:\n");
	for(i=0;i<SIZE1;i++){
		for(j=0;j<SIZE2;j++){
			ms[i][j]=(2*ma[i][j])+(3*mb[i][j]);
			printf("%5d",ms[i][j]);
		}
		printf("\n\n");
	}
	
	printf("Transpose of Matrix C:\n");
	for(i=0;i<SIZE1;i++){
		for(j=0;j<SIZE2;j++){
			ms[i][j]=(2*ma[i][j])+(3*mb[i][j]);
			printf("%5d",ms[j][i]);
		}
		printf("\n\n");
	}
	return 0;
}
