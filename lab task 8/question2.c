#include<stdio.h>
int main(){
	int arr1[10], arr2[10];
	int i,j,x, k=0;
	int isduplicate, intersec[10];
	
	for(i=0;i<10;i++){
	printf("enter numbers in first array:");
  	scanf("%d",&arr1[i]);
  }
  	for(i=0;i<10;i++){
  	printf("enter numbers in second array:");
  	scanf("%d",&arr2[i]);
  }
  		for(i=0;i<10;i++){
  			for(j=0;j<10;j++){
  				if(arr1[i]==arr2[j]){
  					
  					isduplicate=0;
  					for(x=0;x<k;x++){
  						if(intersec[x]==arr1[i]){
  							isduplicate=1;
  							break;
						  }  						
					  }
					if(!isduplicate){
						intersec[k++]=arr1[i];
					}  
				  }				  
			  }
		  }
		  printf("intersection between the two array is:");
		  for(i=0;i<k;i++){
		  	printf("%d ",intersec[i]);
		  }
	return 0;	  
}
