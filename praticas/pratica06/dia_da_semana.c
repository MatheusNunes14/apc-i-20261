#include <stdio.h>

int main() {
    int dia;

    scanf("%d", &dia);

    switch(dia) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Dia util\n");
            break;

        case 6:
        case 7:
            printf("Final de semana\n");
            break;

        default:
            printf("Invalido\n");
    }

    return 0;
}
