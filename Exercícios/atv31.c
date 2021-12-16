#include <stdio.h>
#include <time.h>
/* 
exercicio 31

*/


void minimax (float *v, int n, float *a, float *b) {
  int i;

  for(i = 0; i < n; i++) {
    if (*a > v[i]) { *a = v[i];}

    if (*b < v[i]) { *b = v[i]; }
  }
}

int main(){	
	float v[] = {0, -3, -10.5, 15.5, 20, 37};
	float x, y;
	int tam = 6;
	minimax (v, tam, &x, &y);
	printf("%.2f %.2f", x, y);
	return 0;
}
