#include <stdio.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main()
{
    double C, F;
    char resp;
    do
    {
        printf("Digite a temperatura em graus Celsius: ");
        scanf("%lf", &C);
        F = 9.0 * C / 5.0 + 32.0;
        printf("Equivalente em graus Fahrenheit: %.1lf\n", F);
        printf("Deseja repetir (s/n)? ");
        limpar_entrada();
        scanf("%c", &resp);
    }
    while (resp == 's'|| resp == 'S');
    return 0;
}
