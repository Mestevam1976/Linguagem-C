#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int idade1, idade2;
    char  pessoa1[50], pessoa2[50];
    double media;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    fgets(pessoa1,50,stdin);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("\nDados da segunda pessoa: \n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(pessoa2, 50);

    printf("Digite a idade da segunda pessoa:\n");
    scanf("%d", &idade2);

    media = (idade1 + idade2)/2.0;

    printf("A idade media de %s e %s é de %.1lf anos", pessoa1, pessoa2, media);

    return 0;
}
