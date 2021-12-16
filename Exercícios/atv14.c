#include <stdio.h>

int main() {
 
 	// exercicio 14

	int numero, i, resultado=0, somador=1;

  printf("Digite o valor: ");
  scanf("%d",&numero);  

  for (i = 0; i < numero; i++) {
    
		resultado += somador;
		somador += 2;
		
	}
	

  printf("O quadrado de %d sera %d.\n", numero, resultado);
  
  return 0;
}
