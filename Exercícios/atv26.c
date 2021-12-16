#include <stdio.h>

/* 
exercicio 26

*/


int main() {
	float A[10][3], mediaClasse; 
	int i, j;                   					 
	
	for (i = 0; i < 10; i++) {   				   		 
	
		for (j=0; j<2; j++) {    						
    		printf ("Aluno %d - Nota %d: ", i+1 , j+1);
			scanf ("%f", &A[i][j]);	
		}  
		
		A[i][2] = (A[i][0] + A[i][1])/2;     			
			printf("Media: %.2f\n", A[i][2]);
			mediaClasse += A[i][2]; 
   	} 
   	
   	mediaClasse /= 10;
	    
	for (i=0; i<10; i++) {                   		    
		printf("\n"); 
		
		for(j = 0; j < 3; j++) {                		
	
		if ( j = 2 ) {
		        
		    if (A[i][j] > mediaClasse) {
		    	printf ("A media do aluno e:  %.2f , entao esta acima %.2f media da classe" , A[i][2] , mediaClasse); 
		        
		    } else if (A[i][j] < mediaClasse) {
		        printf ("A media do aluno e:  %.2f , entao esta abaixo %.2f media da classe",  A[i][2] , mediaClasse);
		            
		    } else {
		        printf ("A media do aluno e:  %.2f , entao esta igual %.2f media da classe", A[i][2] , mediaClasse);
		        }
		}
		}
	}  
	  
	return 0;
}
