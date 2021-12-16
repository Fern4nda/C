#include <stdio.h>
#include <string.h>
//Questão 02


void strdel(char s[], int p) {
    strcpy (s+p, s+p+1);
}

int main()
{
    int posicao = 0;
    printf("Digite a posicao do caracter a ser removido:\n");
    scanf("%d", &posicao);
    
    char frase[] = "Remove o character";
    printf("Frase original: %s\n", frase);
    
    strdel(frase, posicao-1);
    printf("Frase alterada: %s\n", frase);

    return 0;
}
