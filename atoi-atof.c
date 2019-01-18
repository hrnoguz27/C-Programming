#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
	
	char sqrt2[] = "1.414213";
	char pi[] = "3.14";
	char integer_number[] = "156";
	char result[] = "42 is the answer";

	printf( "%d\n", atoi( integer_number ) );
	printf( "%d\n", atoi( result ) );
	printf( "%f\n", atof( sqrt2 ) );
	printf( "%f\n", atof( pi ) );
	return 0;
}
