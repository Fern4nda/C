//Questão 05

#include <stdio.h> 
int divide(int a, int b) {
    if (b == 1)
        return a;
    else if (a < b)
        return 0;
    else
        return 1 + divide(a - b, b);
}

int main(){
    int a, b, resultado;
    
	printf ("Forneca o valor de a: ");
    scanf ("%d", &a);
    	
    do {
    	printf ("Forneca o valor de b: ");
    	scanf ("%d", &b);
    	if (b == 0) {
		printf("Digite um valor diferente de 0\n");
		}
    } while (b == 0);	
    
	resultado = divide(a, b);
	
	printf("Quociente = %d", resultado);
	
    return 0;
}



