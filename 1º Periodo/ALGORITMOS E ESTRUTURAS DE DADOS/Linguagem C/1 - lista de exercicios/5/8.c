#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.
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

   if(primeiro % 2 == 0 && segundo % 2 != 0){
       printf("%i é par e %i é impar",primeiro,segundo);
   }
}