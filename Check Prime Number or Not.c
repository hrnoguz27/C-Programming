#include<stdio.h>
void isPrime(int);
int main(void)
{
	int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    isPrime(number);
    
  return 0;
}
void isPrime(int num){
	int i,counter=0;
	for(i=2;i<num;i++)
    {
       if(num%i==0)
       {
           counter++;
       }    
    }     
    
    if(counter==0)
    {
        printf("%d is Prime Number",num);                    
    }
    else
    {
        printf("%d is not Prime Number",num); 
    }
}
