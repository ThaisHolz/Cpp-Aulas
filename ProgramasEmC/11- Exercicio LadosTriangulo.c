#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "");

    //Vari�veis
    int lado1, lado2, lado3;

    //Leia 3 valores que formem um tri�ngulo equilatero
    printf("Digite 3 valores:");
        scanf("%d %d %d", &lado1, &lado2, &lado3);

   if((lado1 == lado2)&&(lado2 == lado3))
   {
       printf("\n O tri�ngulo � equil�tero");
   }

    //Com pelo menos 2 lados iguais
    if((lado1 == lado2)||(lado2 == lado3)||(lado3 == lado1))
    {
        printf("\n � um tri�ngulo is�celes");
    }
    else
    {
       printf("\n O tri�ngulo � escaleno");
    }

}
