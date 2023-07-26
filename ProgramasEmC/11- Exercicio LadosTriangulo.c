#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Variáveis
    int lado1, lado2, lado3;

    //Leia 3 valores que formem um triângulo equilatero
    printf("Digite 3 valores:");
        scanf("%d %d %d", &lado1, &lado2, &lado3);

   if((lado1 == lado2)&&(lado2 == lado3))
   {
       printf("\n O triângulo é equilátero");
   }

    //Com pelo menos 2 lados iguais
    if((lado1 == lado2)||(lado2 == lado3)||(lado3 == lado1))
    {
        printf("\n É um triângulo isóceles");
    }
    else
    {
       printf("\n O triângulo é escaleno");
    }

}
