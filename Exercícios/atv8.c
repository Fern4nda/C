#include<stdio.h>

int main(){
	
	// exercicio 08

	
	int f;
	float m;
	
	printf("Insira a quantidade de faltas: ");
	scanf("%d", &f);
	
	printf("Insira a media do aluno: ");
	scanf("%f" , &m);
	
	if (f>5)
	printf("conceito final: F");
		
	else if( m<6.0)
		printf("conceito final: C");
		
	else if( m<7.5)
		printf("conceito final: B");
		
	else if( m<9)
		printf("conceito final: A");
		
	else ( m>=9.0)
		printf("conceito final: E");

	return 0;
}
