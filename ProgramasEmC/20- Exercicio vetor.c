#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Definindo tamanho do vetor
    int tamanho;

    printf("Qual o tamanho do vetor?");
        scanf("%d", &tamanho);

    //Leia 3 valores para um vetor de 3 posições e calcule a media
    float vetor[tamanho], soma;
    int i;

    for(i = 0; i < tamanho; i++)
    {
        printf("Digite um valor:");
        scanf("\n%f",&vetor[i]);

        soma = soma + vetor[i];
    }

    printf("\nA média dos valores é: %.2f", (soma/tamanho));

}
