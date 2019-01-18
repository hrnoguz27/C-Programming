#include <stdio.h>
int  main ()
{
	int i;
	 printf("Even Number:\t   Odd Number:\n");
	 
	 for (i=0; i<=100; i++){
	 	
	 	if(i%2==0){
	 		printf("%20d\n",i);
		 }
		else {
			printf("%d\n",i);
		}
		 
	 }
	 return 0;
}
