#include <stdio.h>

int main() {
 
 	// exercicio 11 
	
 int n;
 

	do{
	
	printf("\nDigite um numero:   ");
 	scanf("%d", &n);
	
	n= n*n;
	
	printf("\nO quadrado do numero: %d\n", n);
		
	}
	
	while (n!= 0);

  return 0;
}
