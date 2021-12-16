#include <stdio.h>

/* 
exercicio 21


Codifique uma função recursiva que calcule o produto de dois naturais usando soma.
Quais as soluções triviais?
Qual a solução geral?
O problema está diminuindo?

*/

unsigned int prod(int a, int b) 
{
  if (b == 0 ) return 0;
  if (b==1) return a;
  
  return a + prod(a, b - 1);
} 


int main() {

int a, b;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  
  printf("O produto dos dois numeros é: %d\n", prod(a, b));
 
  return 0;

}

