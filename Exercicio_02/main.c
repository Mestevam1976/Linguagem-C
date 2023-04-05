#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Digite o valor da base do retangulo:");
    scanf("%lf", &base);

    printf("Digite o valor da altura do retangulo:");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base +  altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("AREA DO RETANGULO = %.4lf\n", area);
    printf("PERIMETRO DO RETANGULO = %.4lf\n", perimetro);
    printf("DIAGONAL DO RETANGULO = %.4lf\n", diagonal);

    return 0;
}
