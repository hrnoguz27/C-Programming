#include<stdio.h>
#include<math.h>
typedef struct times{
	int hour;
	int min;
	int sec;
};
struct times diff(struct times,struct times);
int main(){
	times tm1;
	times tm2;
	printf("Enter time 1: ");
	scanf("%d:%d:%d",&tm1.hour,&tm1.min,&tm1.sec);
	printf("Enter time 2: ");
	scanf("%d:%d:%d",&tm2.hour,&tm2.min,&tm2.sec);
	printf("\nDifference is: ");
	printf("%.2d:%.2d:%.2d",diff(tm1,tm2).hour,diff(tm1,tm2).min,diff(tm1,tm2).sec);
}
struct times diff(struct times first,struct times second){
	times result;
	int tot1,tot2;
		tot1=(first.hour*3600)+(first.min*60)+first.sec;
		tot2=(second.hour*3600)+(second.min*60)+second.sec;
		if(tot2>tot1){
			result.hour=(tot2-tot1)/3600;
			result.min=((tot2-tot1)%3600)/60;
			result.sec=((tot2-tot1)%3600)%60;
		}
		else{
			result.hour=(tot1-tot2)/3600;
			result.min=((tot1-tot2)%3600)/60;
			result.sec=((tot1-tot2)%3600)%60;
		}		
			return result;
}
