#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler tr�s valores reais do teclado e dizer se o primeiro est� entre os outros dois
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   float primeiro, segundo, terceiro;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o primeiro n�mero: ");
   scanf("%f",&primeiro);

   printf("Digite o segundo n�mero: ");
   scanf("%f",&segundo);

   printf("Digite o terceiro n�mero: ");
   scanf("%f",&terceiro);

   if(segundo < primeiro && terceiro > primeiro && segundo < terceiro
   || segundo > primeiro && terceiro < primeiro && segundo > terceiro){
       printf("%.2f est� entre %.2f e %.2f", primeiro, segundo, terceiro);
   }
}