#include <stdio.h>
#include <string.h>


void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}

}

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

main()
{
    /* Declaração das Variáveis */
    int idade1, idade2;
    double salario1, salario2, altura1, altura2;
    char nome1[80], nome2[80];

    /*Entrada de Dados*/
    printf("---------ENTRADA DE DADOS---------\n");
    printf("Digite o valor da idade 1: ");
    scanf("%d", &idade1);
    printf("Digite o valor do salario 1: ");
    scanf("%lf", &salario1);
    printf("Digite o valor da altura 1:  ");
    scanf("%lf", &altura1);
    printf("Digite o nome da pessoa 1: ");
    limpar_entrada();
    ler_texto(nome1, 80);
    printf("------------------------------\n");
    printf("Digite o valor da idade 2: ");
    scanf("%d", &idade2);
    printf("Digite o valor do salario 1: ");
    scanf("%lf", &salario2);
    printf("Digite o valor da altura 1:  ");
    scanf("%lf", &altura2);
    printf("Digite o nome da pessoa 1: ");
    limpar_entrada();
    ler_texto(nome2, 80);


    /* Saída de Dados: */
    printf("----------SAÍDA DE DADOS-----------\n");
    printf("IDADE = %d\n", idade1);
    printf("SALARIO = %.2lf\n", salario1);
    printf("ALTURA = %.2lf\n", altura1);
    printf("NOME = %s\n", nome1);
    printf("------------------------------\n");
    printf("IDADE = %d\n", idade2);
    printf("SALARIO = %.2lf\n", salario2);
    printf("ALTURA = %.2lf\n", altura2);
    printf("NOME = %s\n", nome2);


    return 0;
}
