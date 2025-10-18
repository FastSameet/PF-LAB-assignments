#include<stdio.h>
int main(){
	int num[6];
	int i, last;
	for(i=0; i<6; i++){
		printf("enter numbers:");
		scanf("%d",&num[i]);
	}
	last=num[5];
	for(i=5;i>0;i--){
		num[i]=num[i-1];
	}
	num[0]=last;
	printf("after right shifing:");
	for(i=0;i<6;i++){
		printf("%d",num[i]);
	}
	return 0;
}
