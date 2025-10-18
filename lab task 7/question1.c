#include<stdio.h>
int main(){
	int empid, i, check=0;
	int ID[12];
	for(i=0;i<12;i++){
	printf("enter employee ID's:");
	scanf("%d",&ID[i]);
}
	printf("enter your employee id:");
	scanf("%d",&empid);
	for(i=0;i<12;i++){
		if(empid==ID[i]){
			printf("this is correct ID.");
			check=1;
			break;
		}
	}
		if(check==0){
			printf("this is not the correct ID.");
		}

return 0;
}
