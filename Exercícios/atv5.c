#include<stdio.h>

int main ()
{	 //atividade 05

	
	char ch;
	
	printf(" Insira um caractere: ");
	scanf("%c", &ch);
	
	printf("\n Codigo ASCII de %c em Octal: %o ", ch, ch);
	printf("\n Codigo ASCII de %c em Decimal: %d ", ch, ch);
	printf("\n Codigo ASCII de %c em Hexadecimal: %X ", ch, ch);
	
	
	return 0;
}
