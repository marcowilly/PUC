#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo,
 * e o segundo é ímpar e negativo. 
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int primeiro, segundo;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o primeiro número: ");
   scanf("%i",&primeiro);

   printf("Digite o segundo número: ");
   scanf("%i",&segundo);

   if((primeiro % 2 == 0 && primeiro > 0) && (segundo % 2 != 0 && segundo < 0)){
       printf("%i é par positivo e %i é impar negativo",primeiro,segundo);
   }
}