#include<stdio.h>
int main(){
	int value[10];
	int i, sum=0;
	for(i=0;i<10;i++){
		printf("enter your profit/loss value:");
		scanf("%d",&value[i]);
	}
	for(i=0;i<10;i++){
	if(value[i]>0){
		sum=sum+value[i];
	}
}
	printf("sum of profit is:%d",sum);
	return 0;
}
