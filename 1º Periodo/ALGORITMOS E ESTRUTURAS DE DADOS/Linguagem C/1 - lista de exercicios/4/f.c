#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Faça um algoritmo que peça ao usuário a base e a altura e calcule
 * a área de um triangulo. 
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   float area, base, altura;
   setlocale(LC_ALL, "portuguese");

   printf("Digite a base do triângulo: ");
   scanf("%f", &base);

   printf("Digite a altura do triângulo: ");
   scanf("%f", &altura);

   area = (base * altura) / 2;

   printf("A area do triângulo é %.2f", area);
}