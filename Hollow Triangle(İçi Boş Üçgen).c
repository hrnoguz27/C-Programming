/*
Hollow Triangle

    *        4d�� 0i� 1 y�ld�z
   * *       3d�� 1 i� 2 y�ld�z 
  *   *      2d�� 3 i� 2 y�ld�z
 *     *     1d�� 5 i� 2 y�ld�z
* * * * *    0d�� 7 i� 5 y�ld�z

*/
#include<stdio.h>
int main(){
	int size,str=1;
	int r;
	int c;
	printf("Enter size of triangle: ");
	scanf("%d",&size);
	
	int db=size-1;
	int ic=-1;
	for(r=1;r<=size-1;r++){
		for(c=1;c<=db;c++)
		printf(" ");
		printf("*");
		if(r!=1){
		for(c=1;c<=ic;c++)
		printf(" ");
		printf("*");} //end of if
		ic+=2;
		db--;
		printf("\n");
	} //end of first for loop
	
	for(c=1;c<=size;c++)
	printf("* ");
	return 0;
	}
