#include<stdio.h>


int main(){

   int i,j,k;

	for(i=1; i<=5; i++){
		
		for(j=1; j<i; j++){
			printf("  ");
		}
		
		for(j=i; j<=5; j++){
			if(j%2==0){
				printf("0 ");
			}
			else {
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	printf("\n__________________\n");
	 
	 
	 return 0;
	 
}
