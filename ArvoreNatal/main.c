#include <stdio.h>
#include <stdlib.h>
#include "Natal.h"

int main()
{
    int i=1;
    int n, opc;
    Tempo *t;
    t = malloc(sizeof(Tempo));

    printf("Desenvolvedora -> Ana Gomes\n\n");

    do{
        printf("\n\n========== MENU =========\n");
        printf("1 - Criar arvore de natal\n");
        printf("2 - Sair\n");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            printf("\nDigite um valor no intervalo de 2 ate 14 para a altura da arvore: ");
            scanf("%d",&n);
            while(n<2 || n > 14){
                printf("\nValor incorreto! Por favor digite novamente: ");
                scanf("%d",&n);
            }

            system("cls");

            MensagemNatalina(t);

            while(i<=n){
                ConstroiArvore(i);
                i++;
            }

            SuporteArvore();
            printf("\n\n");

            i = 1;

        break;

        }
    }while(opc!=2);

    return 0;
}
