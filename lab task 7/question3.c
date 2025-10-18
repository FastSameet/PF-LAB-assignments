#include<stdio.h>
int main(){
	int age[8];
	int young, i;
	for(i=0; i<8; i++){
	printf("enter ages of the 8 participants:");
	scanf("%d",&age[i]);
}
 young=age[0];
  for(i=0; i<8; i++){
  	if(age[i]<age[0]){
  		young=age[i];
	  }
  }
		printf("the youngest age of the participants is:%d",young);
return 0;
}
