#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 2 notas e mostre a média delas
    float nota1, nota2;

        printf("O valor da primeira nota é:");
        scanf("%f", &nota1);

        printf("O valor da segunda nota é:");
        scanf("%f", &nota2);

    //Cálculo da média
    printf("A média das notas é: %.2f", (nota1 + nota2) / 2);
    printf("\n");

    //Algoritmo que leia 2 valores e mostre a diferença entre elas com valor ABSOLUTO
    int valor1, valor2;

        printf("Digite o valor 1:");
        scanf("%d", &valor1);

        printf("Digite o valor 2:");
        scanf("%d", &valor2);

        printf("A diferença entre os valores é: %d", abs(valor1 - valor2));
}
