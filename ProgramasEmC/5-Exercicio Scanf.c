#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Algoritmo que leia 3 n�meros de uma vez s� com resultados
    int nota1, nota2, nota3, resultado;

    printf("Digite as 3 notas:");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
        resultado = nota1 * nota2 * nota3;

    printf("O resultado �: %d", resultado);


}
