#include<stdio.h>

int main(){
	
	// exercicio 07

	
	
	int n;
	int mod;
	
	printf("Insira um numero: ");
	scanf("%d", &n); 
	mod = n%10;
	printf("%d", mod);
	
	switch (mod){
		
		case 1: 
		case 2:
		printf("\n Seu rodizio sera na segunda feira");break;
		
		case 3:
		case 4:
		 printf("\n Seu rodizio sera na terca feira");break;
	
		case 5:
		case 6:
		 printf("\n Seu rodizio sera na quarta feira");break;
		
		case 7:
		case 8:
		 printf("\n Seu rodizio sera na quinta feira");break;
		
		case 9:
		case 0:
		 printf("\n Seu rodizio sera na sexta feira");break;		
		
		default: printf("\n O numero inserido e invalido");
	}
	
	
	return 0;
}
