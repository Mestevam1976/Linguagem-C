#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Digite dois números inteiros: \n");
    scanf("%d %d", &x, &y);

    while (x != y)
    {
        if (x < y)
        {
            printf("CRESCENTE\n");
        }
        else
        {
            printf("DECRESCENTE\n");
        }
        printf("Digite outros dois números inteiros: \n");
        scanf("%d %d", &x, &y);
    }
    printf("==================================\n");
    printf("NÚMEROS IGUAIS - FIM DE EXECUÇÃO\n");
    return 0;
}
