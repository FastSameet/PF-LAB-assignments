#include<stdio.h>
int main(){
   		int arr1[10], arr2[10], unionarr[20];
   		int i, j, k=0, isduplicate=0;
   		for(i=0;i<10;i++){
   		printf("enter numbers in first array:");
   		scanf("%d",&arr1[i]);
   	}
   		for(i=0;i<10;i++){
   		printf("enter numbers in second array:");
   		scanf("%d",&arr2[i]);
   	}
   	for(i=0;i<10;i++){
   		unionarr[k++]=arr1[i];     
	   }
    for(i=0;i<10;i++){
       	isduplicate=0;
	   		for(j=0;j<k;j++){			
	   		if(arr2[i]==unionarr[j]){
	   			isduplicate=1;
	   			break;
			   }
		   }
		   if(!isduplicate){	  
		   	unionarr[k++]= arr2[i];
		   }
	}
	   	printf("the union of those two array is:");
	   	for(i=0;i<k;i++){
	   		printf("%d ",unionarr[i]);
		   }
   	
    return 0;
}
