#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, x, soma;

    printf("Quantos numeros inteiros serão digitados? ");
    scanf("%d", &N);

    soma = 0;
    for (i = 1; i <= N; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("--------RESULTADO----------\n");
    printf("A soma dos numeros inteiros digitados é %d", soma);

    return 0;
}
