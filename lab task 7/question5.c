#include<Stdio.h>
int main(){
	int arr[12];
	int i, j, num, size=12;
	for(i=0;i<size;i++){
		printf("enter 12 numbers:");
		scanf("%d",&arr[i]);
	}
		printf("enter the number you want to remove:");
		scanf("%d",&num);
	for(i=0;i<size;i++){
		if(arr[i]==num){
			for(j=i;j<size-1;j++){
				arr[j]=arr[j+1];
			}
			size--;
			i--;
		}
	}
		printf("after removing %d:",num);
		 for(i=0;i<size;i++){
		 	printf("%d",arr[i]);
		 }	
return 0;	
}
