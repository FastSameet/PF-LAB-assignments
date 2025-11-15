#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter a string:");
	fgets(str,100,stdin);
	str[strcspn(str, "\n")] = '\0';  
	int size= strlen(str);
	int middle= size/2; 
	char temp;
	int i;
	for(i=0;i<middle;i++){    
		temp=str[i];         
		str[i]=str[size-1-i];  	                        
		str[size-1-i]=temp;     
	}
	printf("string after reversal:");
	for(i=0;i<size;i++){
		printf("%c",str[i]);
	}
	return 0;
}
