#include <stdio.h>
#include <string.h>

int main()
{

    int idade;
    double salario, altura;
    char genero;
    char nome[50]; /*Vetor de Caracteres*/

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F'; /* Quando for utilizar apenas um caractere, esse deverá estar entre aspas simples*/
    strcpy(nome, "Maria Silva");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2f\n", salario);
    printf("ALTURA = %.2f\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;
}
