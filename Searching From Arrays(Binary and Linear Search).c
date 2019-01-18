#include<stdio.h>
#define SIZE 20
int l_search(int [],int,int);
int b_search(int [],int,int);
int main(){
	
	int numbers[SIZE],i;
	int key;
	printf("Array:");
	for(i=0;i<SIZE;i++){	
		numbers[i]=i*3;
		printf("%d ",numbers[i]);
	}
	
	printf("\nPlease Enter the Search Number: ");
	scanf("%d",&key);
	if(l_search(numbers,SIZE,key)!=-1){
			printf("Linear Search Result: %d is found in the element with index %d\n",key,l_search(numbers,SIZE,key));
	}
	else{
		printf("Linear Search Result: Can not be found\n");
	}
	
	if(b_search(numbers,SIZE,key)!=-1){
		printf("Binary Search Result: %d is found in the element with index %d",key,b_search(numbers,SIZE,key));
	}
	else{
		printf("Linear Search Result: Can not be found\n");
	}
	


return 0;
}
int l_search(int n[],int s,int k){
	
	int c,value=-1;
	for(c=0;c<s;c++){
		if(k==n[c]){
			value=c;
			break;
		}
	}
	
	return value;
}

int b_search(int n[],int s,int k){
	
	int low=0,high=s-1,middle;

	while(low<=high){
		
		middle=(low+high)/2;
		
		if(k==n[middle]){
			
			return middle;
			
		}
		
		else if(k<n[middle]){
			high=middle-1;
		}
		else
		{
			low=middle+1;
		}
		
	}
		return -1;
}	

