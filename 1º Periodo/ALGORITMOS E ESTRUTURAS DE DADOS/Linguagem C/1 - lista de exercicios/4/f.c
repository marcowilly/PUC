#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Fa�a um algoritmo que pe�a ao usu�rio a base e a altura e calcule
 * a �rea de um triangulo. 
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   float area, base, altura;
   setlocale(LC_ALL, "portuguese");

   printf("Digite a base do tri�ngulo: ");
   scanf("%f", &base);

   printf("Digite a altura do tri�ngulo: ");
   scanf("%f", &altura);

   area = (base * altura) / 2;

   printf("A area do tri�ngulo � %.2f", area);
}