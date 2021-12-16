#include <stdio.h>
#include <string.h>

/* 
exercicio 27

*/

int main (void)
{
char frase[50];
int i, p=0, total=0;

printf("Escreva a frase: \n");
fgets(frase,51,stdin);

for(i=0;frase[i]!='\0';i++) {
	if(!p && frase[i]!=' ') {
		p=1;
		total++;
	}
	else if(p && frase[i]==' ')
		p=0;
}
printf("O numero de palavras e: %d\n",total);

return 0;
}
