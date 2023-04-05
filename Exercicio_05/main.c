#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;

    a,b,c,delta = 0;
    x1, x2 = 0;

    printf("=== FORMULA DE BASKARA ===\n");
    printf("Digite o valor do coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o valor do coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o valor do coeficiente c: ");
    scanf("%lf", &c);

    delta = pow(b,2) - 4 * a * c;

    if (delta < 0 || a == 0) {
        printf("Essa Equação não possui raízes reais\n");
        }
    else {
        x1 = (-1 * b + sqrt(delta))/ (2 * a);
        x2 = (-1 * b - sqrt(delta))/ (2 * a);
        printf("A raiz x1 tem o valor de %.4lf\n", x1);
        printf("A raiz x2 tem o valor de %.4lf\n", x2);
        }

    return 0;
}
