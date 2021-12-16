#include <stdio.h>

/* 
exercicio 20


Elabore uma fun��o recursiva que calcule pot�ncia de a elevado a b usando multiplica��o, sendo a um double e b um inteiro maior ou igual a zero (unsigned). Use o programa abaixo para testar sua fun��o.

intmain() {

  double a;

  unsignedint b;

  printf(�\nDigite a e b:");

  scanf("%lf %u", &a, &b);

  printf("\n%.2lf elevado a %u: %.2lf", a, b, pot(a, b));

  return 0;

}


*/


double rec_pow(double base, unsigned int exponent) {
  if (exponent == 0)
    return 1;
  else
    return base * rec_pow(base, exponent - 1);
}

int main(void) {
  double base;
  unsigned int exponent;

  printf("Digite o n�mero da base:    ");
  scanf("%lf", &base);

  printf("Digite o n�mero do expoente:    ");
  scanf("%d", &exponent);

  double pow_result = rec_pow(base, exponent);
  printf("O resultado �: %.2lf\n", pow_result);

 
  return 0;

}

