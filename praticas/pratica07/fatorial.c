#include <stdio.h>

int main() {
    int numero, i;
    long long fatorial = 1;

    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("%lld\n", fatorial);

    return 0;
}
