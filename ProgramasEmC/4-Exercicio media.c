#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 2 notas e mostre a m�dia delas
    float nota1, nota2;

        printf("O valor da primeira nota �:");
        scanf("%f", &nota1);

        printf("O valor da segunda nota �:");
        scanf("%f", &nota2);

    //C�lculo da m�dia
    printf("A m�dia das notas �: %.2f", (nota1 + nota2) / 2);
    printf("\n");

    //Algoritmo que leia 2 valores e mostre a diferen�a entre elas com valor ABSOLUTO
    int valor1, valor2;

        printf("Digite o valor 1:");
        scanf("%d", &valor1);

        printf("Digite o valor 2:");
        scanf("%d", &valor2);

        printf("A diferen�a entre os valores �: %d", abs(valor1 - valor2));
}
