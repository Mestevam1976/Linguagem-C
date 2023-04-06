#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Quantos números inteiros você irá digitar? \n");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um número: \n");
        scanf("%d", &vet[i]);
    }

    printf("\nNÚMEROS NEGATIVOS: \n");
    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }


    return 0;
}
