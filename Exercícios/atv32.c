#include <stdio.h>
/* 
exercicio 32

*/


typedef struct {

     int dia;

     int mes;

     int ano;

  }DATA;


  typedef struct {

     char nome[31];

     char fone[21];

     DATA nasc;

  }PESSOA;


  int main(){

  PESSOA melhorAmigo;


	strcpy(melhorAmigo.nome,"Joao");
	
	strcpy(melhorAmigo.fone,"9945784");
	
	melhorAmigo.nasc.dia=27;
	melhorAmigo.nasc.mes=03;
	melhorAmigo.nasc.ano=1996;
	
	
	printf("Nome:%s \nfone: %s\nData de nascimento:%d/%d/%d", melhorAmigo.nome, melhorAmigo.fone, melhorAmigo.nasc.dia,
	melhorAmigo.nasc.mes,melhorAmigo.nasc.ano);


	return 0;
}
