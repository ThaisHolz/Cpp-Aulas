#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Vari�veis
    float nota1, nota2, nota3, media;

    //Leia 3 notas com a m�dia entre elas, se maior que 7 aprovado
    printf("O valor da primeira nota �:");
        scanf("%f", &nota1);

    printf("O valor da segunda nota �:");
        scanf("%f", &nota2);

    printf("O valor da terceira nota �:");
        scanf("%f", &nota3);

    //C�lculo da m�dia
    media=(nota1 + nota2 + nota3) / 3;

    printf("A m�dia das notas �: %.2f", media);

    //Aprovado ou reprovado
    if(media >= 7)
    {
        printf("\n Aluno aprovado!");
    }
    else
    {
        printf("\n Aluno reprovado.");
    }

}
