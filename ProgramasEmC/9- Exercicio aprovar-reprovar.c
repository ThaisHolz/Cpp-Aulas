#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para acentos
    setlocale(LC_ALL, "");

    //Variáveis
    float nota1, nota2, nota3, media;

    //Leia 3 notas com a média entre elas, se maior que 7 aprovado
    printf("O valor da primeira nota é:");
        scanf("%f", &nota1);

    printf("O valor da segunda nota é:");
        scanf("%f", &nota2);

    printf("O valor da terceira nota é:");
        scanf("%f", &nota3);

    //Cálculo da média
    media=(nota1 + nota2 + nota3) / 3;

    printf("A média das notas é: %.2f", media);

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
