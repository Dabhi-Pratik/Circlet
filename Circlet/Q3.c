#include<stdio.h>


int main(){

   int i,j,k;

	for (i=1; i<=5; i++) {     
	                           
        for (j=1; j<=5-i; j++) {
            printf("  ");       
        }                       
        
        for (j=6-i ; j<=5; j++) { 
            printf("%d ", j);    
        }                       
                                 
        printf("\n");            
	}
	printf("\n__________________\n");
	 
	 
	 return 0;
	 
}
