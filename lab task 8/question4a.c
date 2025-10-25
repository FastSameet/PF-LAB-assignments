//Q4 first part
#include<stdio.h>
int main(){
	float temp[7][3];
	int i,j;
	float avg, dailysum;
		for(i=0;i<7;i++){
				printf("enter temparature for day%d (in morning, afternoon, and night):\n",i+1);
			for(j=0;j<3;j++){
				scanf("%f",&temp[i][j]);				
			}		
		}
		printf("*****the temperature table for seven days (in morning, afternoon, and night)*****\n");
		printf("day\t morning\t afternoon\t night\n");
		for(i=0;i<7;i++){
			printf("%d\t",i+1);
			for(j=0;j<3;j++){
				printf("%.2f\t\t", temp[i][j]);
			}
			printf("\n");
		}
		printf("the average of temprature seven days\n");
		for(i=0;i<7;i++){
			dailysum=0;					
			for(j=0;j<3;j++){
				dailysum+=temp[i][j];
			}
			avg=dailysum / 3;
			printf("day %d: %.2f",i+1,avg);	
			printf("\n");					
		}
		return 0;
}




