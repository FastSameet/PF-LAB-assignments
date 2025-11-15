#include<stdio.h>
int main(){
	int size,i;
	printf("enter size of the array:");
	scanf("%d",&size);
	int nums[size];
	for(i=0;i<size;i++){
		printf("enter element %d of array:",i+1);
		scanf("%d",&nums[i]);
	}
	int j=1;
	for(i=1;i<size;i++){
		if(nums[i]!=nums[i-1]){
			nums[j]=nums[i];
			j++;
		}
	}
	printf("number of unique elements in the array is %d\n",j);
	printf("array after removing the duplicates:");
	for (i = 0; i < j; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
