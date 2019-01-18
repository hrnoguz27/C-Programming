#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c,tot=0;
 	printf("Enter wanted number:");
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      tot+=Fibonacci(i);
      i++; 
   }
   printf("RESULT: %d",tot);
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
