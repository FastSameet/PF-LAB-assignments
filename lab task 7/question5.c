#include<Stdio.h>
int main(){
	int arr[12];
	int newarr[12];
	int i, num, size=12;
	int newsize=0;
	
	for(i=0;i<size;i++){
		printf("enter 12 numbers:");
		scanf("%d",&arr[i]);
	}
		printf("enter the number you want to remove:");
		scanf("%d",&num);
	for(i=0;i<size;i++){
	 		if(arr[i]!=num){
	 			newarr[newsize]=arr[i];
	 			newsize++;
			 }
	}
		printf("after removing %d:",num);
		 for(i=0;i<newsize;i++){
		 	printf("%d",newarr[i]);
		 }	
return 0;	
}
