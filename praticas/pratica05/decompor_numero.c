#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &numero);

    printf("Milhares: %d\n", numero / 1000);
    printf("Centenas: %d\n", (numero % 1000) / 100);
    printf("Dezenas: %d\n", (numero % 100) / 10);
    printf("Unidades: %d\n", numero % 10);

    return 0;
}
