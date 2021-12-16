#include <stdio.h>
#include <math.h>

int main() {
 
 	// exercicio 09

	
	
  int a, b, c;

  printf("Digite o valor de A:  ");
  scanf("%d", &a);

  printf("Digite o valor de B:  ");
  scanf("%d", &b);

  printf("Digite o valor de C:  ");
  scanf("%d", &c);

  double delta = b*b - 4*a*c;
  
  if (a == 0) {
    printf("O valor de A deve ser diferente de 0\n");
  }
	else{
		double bask_x1 = (-b + sqrt(delta)) / 2*a;
  		double bask_x2 = (-b - sqrt(delta)) / 2*a;

  		printf("valor de x1: %.f \n", bask_x1);
 		printf("valor de x2: %.f \n", bask_x2);

	}

  return 0;
}
