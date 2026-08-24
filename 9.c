#include <stdio.h>

int main(void) {
    int n;
    int soma = 0;

    printf("N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}