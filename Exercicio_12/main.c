#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double soma, media;

    printf("Quantos números inteiros você irá digitar?\n");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um número inteiro: \n");
        scanf("%lf", &vet[i]);
    }
    printf("\nVALORES: ");
    for (int i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
    }
    printf("\n");

    soma = 0;
    for (int i = 0; i < N; i++) {
        soma = soma + vet[i];
    }
    printf("=========================\n");
    printf("A SOMA DOS NÚMEROS É %.2lf\n", soma);

    media = soma / N;
    printf("==========================\n");
    printf("A MÉDIA DOS VALORES É %.2lf\n", media);

    return 0;
}
