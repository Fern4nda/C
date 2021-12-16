//Questão 02 


#include <stdio.h> 

void ddd (int n) {
	
	switch (n) { 
		case 61: 
			printf("\n Seu DDD e de Brasilia");break;
		case 71:
			printf("\n Seu DDD e de Salvador");break;
		case 11:
			printf("\n Seu DDD e de Sao Paulo");break;
		case 21:
			printf("\n Seu DDD e do Rio de Janeiro");break;
		case 32:
			printf("\n Seu DDD e de Juiz de Fora");break; 
		case 19:
			printf("\n Seu DDD e de Campinas");break; 
		case 27:
			printf("\n Seu DDD e de Vitoria");break;
		case 31:
			printf("\n Seu DDD e de Belo Horizonte");break;
		default: 
			printf("\n DDD nao cadastrado");
	}
}	

int main() {

  
	int n;
		printf("Insira o numero do DDD: ");
		scanf("%d", &n); 
		ddd(n);
  
  return 0;

}

