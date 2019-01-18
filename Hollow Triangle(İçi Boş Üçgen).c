/*
Hollow Triangle

    *        4dýþ 0iç 1 yýldýz
   * *       3dýþ 1 iç 2 yýldýz 
  *   *      2dýþ 3 iç 2 yýldýz
 *     *     1dýþ 5 iç 2 yýldýz
* * * * *    0dýþ 7 iç 5 yýldýz

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
