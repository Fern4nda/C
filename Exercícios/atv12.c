#include <stdio.h>

int main() {
 
 	// exercicio 12

	
 int n,i, fat=1 ;
 
  printf("Digite um numero:  ");
  scanf("%d", &n);

	i=n;
	
	while (i>0){
		fat=fat*i;
		i--;
	}
	printf("Fatorial do numero %d: %d", n, fat);
  
  
  return 0;
}
