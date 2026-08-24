
#include <stdio.h>

int main(void) {
    int a;
    int b;
    int soma;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    soma = a + b;
    printf("Soma: %d\n", soma);

    return 0;
}