//Questão 04

#include <stdio.h>
#include <stdlib.h>

int grenal (int x, int y) {
    return 0;
}

int main() {
    int golsInter = 0;
    int golsGremio = 0;
    int empates = 0;
    int resposta = 0;
    int vitoriaInter = 0;
    int vitoriaGremio = 0;
    int qtdPartidas = 0;

    do{
        printf("Digite os gols do Inter:\n");
        scanf("%d", &golsInter);
        printf("Digite os gols do Gremio:\n");
        scanf("%d", &golsGremio);
        
        if (golsInter == golsGremio)
            empates++;
        else if(golsInter > golsGremio) 
            vitoriaInter++;
        else if(golsInter < golsGremio) 
            vitoriaGremio++;
            
        qtdPartidas++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resposta);
    
	} while( resposta == 1);
    
    printf("%d grenais:\n", qtdPartidas);
    printf("Inter: %d\n", vitoriaInter);
    printf("Gremio: %d\n", vitoriaGremio);
    printf("Empates: %d\n", empates);
    
    if ( vitoriaInter > vitoriaGremio)
        printf("Inter venceu mais\n");
    else if ( vitoriaInter < vitoriaGremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor");
}

