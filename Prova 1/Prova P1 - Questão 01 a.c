//Questão 01


#include <stdio.h> 
#define Area(base, altura)  (base * altura)

int main( ) {
 
    int base, altura;
   
    	
	do { 
		printf ("Digite a area da base: ");
    	scanf ("%d", &base);
    } while (base <= 0);		
    
    do {
    	printf ("Digite a area da altura: ");
    	scanf ("%d", &altura);
    } while (altura <= 0);	
		
     
    printf("Area: %d\n", Area(base, altura));

    return 0;
}


