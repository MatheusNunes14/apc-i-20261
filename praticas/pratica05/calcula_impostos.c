#include <stdio.h>

#define ICMS 0.17
#define ISS 0.05
#define PIS 0.0165

int main() {
    float valor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("ICMS: %.2f\n", valor * ICMS);
    printf("ISS: %.2f\n", valor * ISS);
    printf("PIS: %.2f\n", valor * PIS);
    printf("Preco final: %.2f\n", (1 + ICMS + ISS + PIS) * valor);

    return 0;
}
