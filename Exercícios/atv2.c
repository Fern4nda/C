#include<stdio.h>
int main()
{	 //atividade 02

	float peso, altura, imc;
	
	printf ("insira seu peso: ");
	scanf("%f",&peso);
	
	printf("Insira sua altura: ");
	scanf("%f",&altura);
	
	imc= peso/(altura*altura);
	printf("Resultado do seu IMC: %f",imc);
		
	return 0;
	
}
