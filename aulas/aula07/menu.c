#include <stdio.h>
#include <stdlib.h>
int main(){
    int opcao =0;

    while(opcao != 5) {
        opcao =0;
        system("clear");
        printf("MENU PRINCIPAL\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Fazer recarga\n");
        printf("3 - Ver recados\n");
        printf("4 - ultimas ligacoes\n");
        printf("5 - Sair\n");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao) {
            case 1: {
                system("clear");
                printf("consulta saldo\n\n");
                printf("Seu saldo eh de 10.00 R$\n"); break;
                }
            case 2: printf("Escolha um valor de recarga\n"); break;
            case 3: printf("Voce nao tem recados.\n"); break;
            case 4: printf("99999-0000\n99999-1111\n"); break;
            case 5: printf("Ate logo\n"); break;
            default: printf("Opcao invalida. tente novamente!\n");
        }

            if (opcao != 5){
                printf("pressione enter para continuar...");
                getchar();
            }

    }





    return 0;
}