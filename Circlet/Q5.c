#include<stdio.h>


int main(){

   int i,j,k;

	for(i=5; i>=1; i--){
		
		for(j=1; j<i; j++){  //  j<=5, 4, 2
				printf("  ");
			}
		
		for(j=i; j<=5; j++){
				printf("%d ", j);
			}
			
			
		for(j=5-1; j>=i; j--){
				printf("%d ", j);
			}
			
			
		printf("\n");
	}
	
    printf("\n__________________\n");
	 
	 
	 return 0;
	 
}
