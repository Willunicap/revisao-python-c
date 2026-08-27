#include <stdio.h>

int main() {
    int n, i;
    int soma = 0;

    printf("N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}