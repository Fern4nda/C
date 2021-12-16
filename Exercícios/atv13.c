#include <stdio.h>

int main() {
 
 	// exercicio 13

	
  int n, acumulador=1, i;
  float x;
  
 	 printf("Insira o valor do expoente: "); // expoente=n
 	 scanf("%d", &n);
  
	printf("Insira o valor da base: "); // base= x
 	 scanf("%f", &x);
 	 
 	 
 	 if (n<0){
 	 	printf("insira o valor de n  maior n>= 0");
 	 	
 	 	return 0;
	  }
  	else {
  	for(i = 0; i < n; i++){
        acumulador *= x; // ou acumulador= acumulador*x
    }
    printf("%d", acumulador);
	  }
  
  
  
  return 0;
}
