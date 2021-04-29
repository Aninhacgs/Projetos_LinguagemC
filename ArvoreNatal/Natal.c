#include "Natal.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

void MensagemNatalina(Tempo *t){
    setlocale(LC_ALL,"portuguese");

    char *semana;

    semana = malloc(30*sizeof(char));

    //Tempo em segundos
    time_t segundos;

    time(&segundos);

    //Convertendo segundos em tempo local

    t = localtime(&segundos);

    //Ajuste do valor do mês
    t->mes = t->mes + 1;

    //Ajuste do valor do ano
    t->diaAno = t->diaAno + 1900;

    //Ajuste do valor do dia da semana

    t->diaSemana = t->diaSemana + 1;

    switch(t->diaSemana){
    case 1:
        strcpy(semana,"Domingo");
    break;

    case 2:
        strcpy(semana,"Segunda-Feira");
    break;

    case 3:
        strcpy(semana,"Terça-Feira");
    break;

    case 4:
        strcpy(semana,"Quarta-Feira");
    break;

    case 5:
        strcpy(semana,"Quinta-Feira");
    break;

    case 6:
        strcpy(semana,"Sexta-Feira");
    break;

    case 7:
        strcpy(semana,"Sábado");
    break;

    }

    printf("\n\n");
    printf("\t\t========== FELIZ NATAL! %s, %d/%d/%d %d:%d:%d ==========\n\n",semana,t->diaMes,t->mes,t->diaAno,t->horas,t->minutos,t->segundos);
}

void ConstroiArvore(int i){
    switch(i){
    case 1:
        printf("\t\t\t\t                     *\n");
    break;

    case 2:
        printf("\t\t\t\t                    ***\n");
    break;

    case 3:
        printf("\t\t\t\t                   *****\n");
    break;

    case 4:
        printf("\t\t\t\t                  *******\n");
    break;

    case 5:
        printf("\t\t\t\t                 *********\n");
    break;

    case 6:
        printf("\t\t\t\t                ***********\n");
    break;

    case 7:
        printf("\t\t\t\t               *************\n");
    break;

    case 8:
        printf("\t\t\t\t              ***************\n");
    break;

    case 9:
        printf("\t\t\t\t             *****************\n");
    break;

    case 10:
        printf("\t\t\t\t            *******************\n");
    break;

    case 11:
        printf("\t\t\t\t           *********************\n");
    break;

    case 12:
        printf("\t\t\t\t          ***********************\n");
    break;

    case 13:
        printf("\t\t\t\t         *************************\n");
    break;

    case 14:
        printf("\t\t\t\t        ***************************\n");
    break;


    }

}

void SuporteArvore(){
    printf("\t\t\t\t                     ||\n");
    printf("\t\t\t\t                     ||\n");
    printf("\t\t\t\t                     ||\n");
}
