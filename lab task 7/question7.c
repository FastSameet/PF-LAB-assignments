#include<stdio.h>
int main(){
	char text[50];
	int i, sum=0;
	printf("enter a text:");
	fgets(text, 50, stdin);
	for(i=0;i<50;i++){
		if(text[i]>='0'&&text[i]<='9'){
			sum+=text[i]-'0';
		}
	}
	printf("the sum of digits that you entered is:%d",sum);
	return 0;
}
