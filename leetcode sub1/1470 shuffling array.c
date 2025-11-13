#include <stdio.h>

int main(){
	int size, i;
	int n=0;
	printf("enter the number of pairs you want in an array:");
	scanf("%d",&n);
	size=2*n;
	int nums[size];
	for(i=0;i<size;i++){
		printf("enter element %d of the array:",i+1);
		scanf("%d",&nums[i]);
	}
	int result[size];
	int j=0;
	for(i=0;i<n;i++){   
		result[j++]=nums[i];  
		result[j++]=nums[i+n];  
	}
	printf("the array after shuffling: ");
	for(i=0;i<size;i++){
		printf("%d ",result[i]);
	}
  	return 0;
}
