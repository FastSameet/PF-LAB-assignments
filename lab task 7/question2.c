#include<stdio.h>
int main(){
	int sum;
	float avg;
	int i;
	int marks[10];
	for(i=0;i<10;i++){
	printf("enter your marks:");
	scanf("%d",&marks[i]);
	sum=sum+marks[i];
}
 avg=sum/10;
 printf("average of your marks is:%f",avg);
return 0;
}
