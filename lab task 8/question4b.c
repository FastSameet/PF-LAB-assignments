#include<stdio.h>
int main(){
  	 int marks[5][3] = {
	{80, 75, 90},
    {60, 70, 65},
    {78, 82, 88},
    {92, 85, 89},
    {55, 60, 58}
};
	int i, j, total;
	float avg;
	    for(i=0;i<5;i++){
	    	total=0;
	    	for(j=0;j<3;j++){
	    		total+=marks[i][j];
			}
			printf("total marks of student %d : %d\n",i+1,total);
		}
		printf("\n");
		for(j=0;j<3;j++){			
	    	   total=0;
	    	for(i=0;i<5;i++){
	    		total+=marks[i][j];
			}
			avg=total / 5;
			printf("the average of subject %d : %f\n",j+1,avg);			
		}
	return 0;			
}
