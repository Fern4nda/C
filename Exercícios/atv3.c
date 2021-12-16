#include<stdio.h>
int main ()
{	 //atividade 03

	
	float F, C;
	
	
	printf("insira a temperatura em Fahrenheit que deseja converter a Celsius: ");
	scanf("%f",&F);
	
	C= (F-32)*5/9;
	printf("A temperatura em Celsius: %f",C);
	
	
	return 0;
}
