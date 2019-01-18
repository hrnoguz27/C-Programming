/* n=5
    *        n-1 boþluk 1 yýldýz
   ***       n-2 boþluk 3 yýldýz 
  *****      n-3 boþluk 5 yýldýz
 *******     n-4 boþluk 7 yýldýz
*********    n-n boþluk 9 yýldýz
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
