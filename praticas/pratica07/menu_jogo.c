#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("1 - Novo jogo\n");
        printf("2 - Continuar jogo\n");
        printf("3 - Ver pontuacao\n");
        printf("4 - Sair\n");

        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Novo jogo\n");
                break;
            case 2:
                printf("Continuar jogo\n");
                break;
            case 3:
                printf("Pontuacao\n");
                break;
            case 4:
                printf("Saindo\n");
                break;
            default:
                printf("Opcao invalida\n");
        }

    } while(opcao != 4);

    return 0;
}
