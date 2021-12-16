//Questão 03 

#include <stdio.h> 
#include <stdlib.h>

void coordenadas (int x, int y) {
    
	if(x == 0 && y == 0)
        printf("Origem\n");
    else if(x > 0 && y == 0)
        printf("Eixo X\n");
	else if(x == 0 && y > 0)
        printf("Eixo Y\n");
	else if(x > 0 && y > 0)
        printf("Primeiro quadrante\n");
	else if(x < 0 && y > 0)
        printf("Segundo quadrante\n");
	else if(x < 0 && y < 0)
        printf("Terceiro quadrante\n");
	else if(x > 0 && y < 0)
        printf("Quarto quadrante\n");
}

int main() {
    int x, y;

	printf("Digite x e y: ");
	scanf("%d%d", &x, &y);
	coordenadas(x, y);
}

