#include <stdio.h>

//exercicio 19


void fatorial (int n ){
 int i, fat=1 ;

	i=n;
	
	while (i>0){
		fat=fat*i;
		i--;
	}
	printf("Fatorial do numero %d: %d", n, fat);
}

int main() {

int n;
    printf("Digite um numero:  ");
 	scanf("%d", &n);
	fatorial(n);

 
  return 0;

}

