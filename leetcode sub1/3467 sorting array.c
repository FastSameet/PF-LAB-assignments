#include<stdio.h>

int main(){
	int size,i,j,temp;
	
	printf("enter size of the array:");
	scanf("%d",&size);
	
	int nums[size];
	
	for(i=0;i<size;i++){
		printf("enter element %d of the array:",i+1);
		scanf("%d",&nums[i]);
	}
	for(i=0;i<size;i++){
		if(nums[i] %2==0){
			nums[i]=0;
		}
		else{
			nums[i]=1;
		}
	}
	printf("before sorting the array: ");
	for(i=0;i<size;i++){
		printf("%d ",nums[i]);
	}

	for(i=0;i<size-1;i++){				
		for(j=i+1;j<size;j++){			
			if(nums[i]>nums[j]){		
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
		}
	}
	printf("\nafter sorting array: ");
	for(i=0;i<size;i++){
		printf("%d ",nums[i]);
	}
	return 0;
}
