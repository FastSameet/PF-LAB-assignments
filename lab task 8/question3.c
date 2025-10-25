#include<stdio.h>
int main(){
	int arr1[10],arr2[10];
	int i,j,comnums=0;
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
						comnums++;
						break;
					}
				}
			}
		printf("the number of elements common between two array is:%d",comnums);
		return 0;
}
