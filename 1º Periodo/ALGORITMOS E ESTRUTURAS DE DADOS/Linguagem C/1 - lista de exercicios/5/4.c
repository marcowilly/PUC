#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler um valor inteiro do teclado e dizer se é par e menor que 100,
 * ou ímpar e maior que 100.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int num;
   const int limit = 100;

   setlocale(LC_ALL, "portuguese");
   printf("Digite um número: ");
   scanf("%i",&num);

   if(num < limit && (num % 2 == 0)){
       printf("O número %i é par e menor que %i", num,limit);
   }else if(num > limit && (num % 2 != 0)){
       printf("O número %i é impar e maior que %i", num,limit);
   }
}