#include <stdio.h>
#include <string.h>

//Questão 03 e 04


typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct {
    int horas;
    int minutos;
} HORARIO;

typedef struct {
    char espMedica[50];
    char nomePaciente[50];
    DATA dataConsulta[8];
    HORARIO horaInicio[5];
    char convenio[50];
} CONSULTAS;

void imprimeConsultas(CONSULTAS *C, int n) {
    int i = 0;
    
    for(i = 0; i < n ; i++) {
        printf("\n| ----------Consultar Registro %d---------- |", i+1);
        printf("\n| Especialidade médica: %s", C[i].espMedica);
        printf("\n| Nome do paciente: %s", C[i].nomePaciente);
        printf("\n| Data da consulta: %d/%d/%d", C[i].dataConsulta->dia, C[i].dataConsulta->mes, C[i].dataConsulta->ano);
        printf("\n| Horario da consulta: %d:%d", C[i].horaInicio->horas, C[i].horaInicio->minutos);
        printf("\n| Convenio: %s\n", C[i].convenio);
    }
}

void inserirConsulta(CONSULTAS *C, int n) {
    int i = 0;
    
    char especialidade[50]; 
    char nome[50];
    int dia;
    int mes;
    int ano;
    int hora;
    int min;
    char convenio[50];
    
    for(i = 0; i < n ; i++) {
        printf("\n| -----------Inserir Registro %d----------- |", i+1);
        printf("\n%d - Digite a especialidade: ", (i+1));
        scanf("%s", especialidade);
        strcpy(C[i].espMedica, especialidade);
        
        printf("%d - Digite o nome do Paciente: ", (i+1));
        scanf("%s", nome);
        strcpy(C[i].nomePaciente, nome);
        
        do {
            printf("%d - Digite o dia da consulta (dd): ", (i+1));
            scanf("%d", &dia);
        } while(dia < 1 || dia > 31);
        C[i].dataConsulta->dia = dia;
        
        do {
            printf("%d - Digite o mes da consulta (mm): ", (i+1));
            scanf("%d", &mes);
        } while(mes < 1 || mes > 12);
        C[i].dataConsulta->mes = mes;

        do {
            printf("%d - Digite o ano da consulta (AAAA): ", (i+1));
            scanf("%d", &ano);
        } while(ano < 1 || ano > 9999);
        C[i].dataConsulta->ano = ano;
        
        do {
            printf("%d - Digite a hora da consulta (hh): ", (i+1));
            scanf("%d", &hora);
        } while(hora < 0 || hora > 23);
        C[i].horaInicio->horas = hora;
        
        
        do {
            printf("%d - Digite os minutos da consulta (mm): ", (i+1));
            scanf("%d", &min);
        } while(min < 0 || min > 59);
        C[i].horaInicio->minutos = min;
        
        printf("%d - Digite o convênio: ", (i+1));
        scanf("%s", convenio);
        strcpy(C[i].convenio, convenio);
        
        printf("\n");
    }
    printf("| ************** |");
}

int main() {
    int n = 10;
    //o codigo comentado abaixo permite escolher quantas consultas deseja inserir.
    //printf("Digite a quantidade de consultas que deseja inserir: ");
    //scanf("%d", &n);
    CONSULTAS con[n];
    inserirConsulta(con, n);
    imprimeConsultas(con, n);

    return 0;
}
