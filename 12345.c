#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,k;
	for(i=1;i<=6;i++){
		for(j=6;j>=i;j--){
			
			printf("-"); 			
		}
		for(k=1;k<=i;k++){
			
			printf("*"); 			
		}
		/*for(k=0;k<6;k++){
			printf("*");	
			}*/
		printf("\n");	
	}
} 
