#include<stdio.h>
#define PI 3.1415
int main ()
{	 //atividade 04

	
	float raio, area, perimetro;
	
	printf("Insira o valor do raio: ");
	scanf("%f",&raio);
	
	area= (PI*raio*raio);
	perimetro=(2*PI*raio);
	
	printf(" Valor da area: %f \n",area);
	printf("Valor do perimetro: %f ",perimetro);
	
	
	return 0;
}
