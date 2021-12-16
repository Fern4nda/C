#include <stdio.h>
/* 
exercicio 30

*/


int ordena(int a, int b){
	
	if(a>b){
		a==b;
		b==a;
		printf("A: %d B: %d", b,a);
	}
	else{
		printf("A: %d B: %d", a,b);
	}
	
}

int main() {

int a,b;
	
	printf("Insira o valor de a: ");
	scanf("%d", &a); 
	
	printf("Insira o valor de b: ");
	scanf("%d", &b); 
	
	ordena(a,b);
	
 	return 0;

}
