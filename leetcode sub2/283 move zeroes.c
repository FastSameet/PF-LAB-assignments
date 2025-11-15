#include<stdio.h>
int main(){
	int size,i,j=0;
	printf("enter size of your array:");
	scanf("%d",&size);
	int nums[size];
	for(i=0;i<size;i++){
		printf("enter element %d of your array:",i+1);
		scanf("%d",&nums[i]);
	}
	for(i=0;i<size;i++){        
		if(nums[i]!=0){         
			nums[j]=nums[i];
			j++;
		}
	}
	while(j<size){      
		nums[j]=0;    
		j++;            
	}
	for(j=0;j<size;j++){      
		printf("%d ",nums[j]);
	}	
	
	return 0;	
}
