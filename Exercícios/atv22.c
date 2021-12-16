#include <stdio.h>

/* 
exercicio 22

Codifique uma função recursiva que recebe um natural n e imprime seus dígitos invertidos (da direita para a esquerda).

*/



int inv (int number){
  int base = 1;

  while (number / (base * 10)) {
    base *= 10;
  }
  
  if (number <= 9){
    return number;
  } else if (number >= 10){
    int revNum = (number % 10) * base;
    return inv(number / 10) + revNum;
  }
}

int main(void) {
  int a;
  
  printf("Digite um numero: ");
  scanf("%d", &a);
  
  printf("O inverso de %d e: %d ", a, inv(a));
}
