#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    printf("Quantos números você irá digitar: ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um número qualquer: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNÚMEROS DIGITADOS:\n");
    for (i = 0; i < N; i++) {
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
