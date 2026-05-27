#include <stdio.h>

int main() {
    float nota;

    do {
        scanf("%f", &nota);
    } while(nota < 0 || nota > 10);

    printf("Nota valida: %.2f\n", nota);

    return 0;
}
