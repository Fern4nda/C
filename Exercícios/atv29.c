#include <stdio.h>
#include <string.h>
/* 
exercicio 29

*/

int strpos(char s[], char c)
{
    int i=0;
    while(s[i]!='\0' && s[i]!= c)
       i++;    
    if (s[i]==c)
       return i;
    return -1;
}
int main() {

	   char s[100];     char c;        int i;
    printf("\nDigite uma frase: ");
    gets(s);    
    printf("\nQual caracter deseja procurar? ");
    c = getche();
    	  i = strpos(s, c);
    if (i != -1)
       printf("\nCaracter na posicao %d.", i+1);
    else
       printf("\nCaracter nao encontrado.");
 
	return 0;
}
