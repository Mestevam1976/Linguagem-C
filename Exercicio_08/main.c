#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, somaIdade, quantidade;
    double mediaIdade;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    somaIdade = 0;
    quantidade = 0;

    while (idade >= 0)
    {
        somaIdade = somaIdade + idade;
        quantidade = quantidade + 1;
        scanf("%d", &idade);
    }

    if (quantidade == 0)
    {
        printf("==================\n");
        printf("IMPOSSÍVEL CALCULAR\n");
    }
    else
    {
        mediaIdade = (double)somaIdade / quantidade;
        printf("==========================\n");
        printf("A MÉDIA DAS IDADES É %.2lf\n", mediaIdade);

    }
    return 0;
}
