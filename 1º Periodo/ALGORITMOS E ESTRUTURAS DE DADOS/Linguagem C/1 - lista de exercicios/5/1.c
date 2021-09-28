#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler um valor inteiro do teclado e dizer se é par 
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int num;

   setlocale(LC_ALL, "portuguese");
   printf("Digite um número: ");
   scanf("%i",&num);

   if(num % 2 == 0){
       printf("O número %i é par", num);
   }
}