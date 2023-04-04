#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma;

    soma = 0;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &x);

    while (x != 0)
    {
        soma = soma + x;
        printf("Digite outro número inteiro: ");
        scanf("%d", &x);
    }

    printf("A soma dos números digitados é igual a: %d\n", soma);

    return 0;
}
