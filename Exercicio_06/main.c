#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, menor;

    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &n2);
    printf("Digite o terceiro número inteiro: \n");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3)
    {
        menor = n1;
    }
    else if (n2 < n1 && n2 < n3)
    {
        menor = n2;
    }
    else
    {
        menor = n3;
    }

    printf("O menor número digitado foi %d", menor);


    return 0;
}
