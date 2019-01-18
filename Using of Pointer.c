#include<stdio.h> 
void swap(int *, int *); 
int main(void){ 
int a=3,b=2,c=6, *px,*py; /*Defining int type of three Variables and two Pointers */   
px=&a;       
*px+=5;     
py=&b;       
*py*=6;    
px=&c;      
*px = *px + *py + a;    
swap(&a,&b);     /*Sending Memory addresses of a and b variables.*/    
swap(px,py);  /*Sending Memory addresses pointed-stored by px and py*/ 
printf("a=%d  b=%d c=%d",a,b,c); } //End of Main 
void swap(int *x, int *y) {  
int temp;  temp = *x;  *x = *y;  *y = temp;
} // End of Function Swap  

