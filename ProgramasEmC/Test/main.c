#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//FUN��ES
int* alocaVetor(int tamanho)
{
    int *aux;

    //Aloca��o dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

//PRINCIPAL
int main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int *vetor, tamanho, i;

    printf("Digite um tamanho para o vetor:");
        scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);

    //Colocando valores no vetor
    for(i = 0; i < tamanho; i++)
    {
        vetor[i] = 90;
    }

    //Imprimindo vetor
    for(i = 0; i < tamanho; i++);
    {
        printf("\n%d", vetor[i]);
    }


    free(vetor);



    return 0;
}
