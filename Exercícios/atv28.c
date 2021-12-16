#include <stdio.h>
#include <string.h>

/* 
exercicio 28
*/

int main()
{
	char strings[50];
	int i, tamanho; 
	
	printf("Digite uma string: "); 
		fgets(strings,50,stdin);
		
	tamanho = strlen(strings); 
	printf("A string invertida : "); 
	
  	for(i=tamanho; i>=0; i--) 
     {
       printf("%c" ,strings[i]);
     } 	
     
return 0;
}
