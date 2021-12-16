/* 
exercicio 25

*/

#include <stdio.h>

void obtem(float temp[], int max) {
	int i = 0;
    for ( i = 0; i < max; i++) {
        printf("%d digite um numero:", i+1);
        scanf("%f", &temp[i]);
    }
}

float media(float temp[], int max) {
    float soma = 0;
    int i = 0;
    
    for ( i = 0; i < max; i++) {
        soma += temp[i];
    }
    soma /= max;
    return soma;
}

int conta(float temp[], int max, float m) {
    int qtd = 0;
    int i = 0;
    for ( i = 0; i < max; i++) {
        if (temp[i] > m )
            qtd++;
    }
    return qtd;
}

#define max 7
int main() {
  float temp[max], m;
  obtem(temp, max);
  m = media(temp, max);
  printf("media: %.2f\n",  m);
  printf("Estatística: %d", conta(temp, max, m) );
  return 0;
}





  
