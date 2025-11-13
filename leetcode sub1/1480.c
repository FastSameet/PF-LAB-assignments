#include <stdio.h>

int main(){
	int n, i;
		printf("enter array size:");
		scanf("%d",&n);
	int nums[n];
	int runningsum[n];
	for(i=0;i<n;i++){
	 	printf("enter element %d of array:",i+1);
	 	scanf("%d",&nums[i]);
	}

	  runningsum[0]=nums[0];
	  for(i=1;i<n;i++){
	  	runningsum[i]= runningsum[i-1]+ nums[i];
	  }
	
	printf("the running sum of the array is: ");
	for(i=0;i<n;i++){
		printf("%d ", runningsum[i]);
	}
  	return 0;
}
