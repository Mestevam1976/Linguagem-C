#include <stdio.h>
#include <stdlib.h>

int main()
{

    double nota1, nota2, nota3, notafinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    notafinal = (nota1 + nota2 + nota3) / 3.0;

    printf("A nota final é de %.1lf\n", notafinal);

    if (notafinal < 60)
    {
        printf("VOCÊ FOI REPROVADO!\n");
    }

    return 0;
}
