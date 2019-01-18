#include<stdio.h>
/*

*****
****
***
**
*

*/
int main(void)
{
int n1,n2,r;
printf("Enter size of triangel: ");
scanf("%d%d",&n1,&n2);
if(n1>n2){
r=1;
while(r<=n1){
	
	printf("%d",n1-r+1);
	r++;
	printf("\n");
	
}
}
	return 0;
}
