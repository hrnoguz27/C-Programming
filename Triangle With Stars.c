/* n=5
    *        n-1 bo�luk 1 y�ld�z
   ***       n-2 bo�luk 3 y�ld�z 
  *****      n-3 bo�luk 5 y�ld�z
 *******     n-4 bo�luk 7 y�ld�z
*********    n-n bo�luk 9 y�ld�z
*/
#include<stdio.h>
int main(){
	int size,str=1;
	int r;
	int c;
	printf("Enter size of triangle: ");
	scanf("%d",&size);
	
	int db=size-1;
	for(r=1;r<=size;r++){
	
		for(c=1;c<=db;c++)
		printf(" ");
		
		for(c=1;c<=str;c++)
		printf("*");
	
	printf("\n");
	db--;
	str+=2;
	} //end of first for loop
	
return 0;
	}
