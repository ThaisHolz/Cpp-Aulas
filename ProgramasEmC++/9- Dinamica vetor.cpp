#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//FUN��ES
int* alocaVetor(int tam)
{
    int *v;

    v = (int *) malloc(tam * sizeof(int));

    return v;
}

//PRINCIPAL
int main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int *vetor, tam, i;

    printf("Digite um tamanho:");
        scanf("%d", &tam);

    vetor = alocaVetor(tam);

    //Colocando valores no vetor
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;

    for(i = 0; i < tam; i++)
    {
        printf("%d", vetor[i]);
    }



    return 0;
}
