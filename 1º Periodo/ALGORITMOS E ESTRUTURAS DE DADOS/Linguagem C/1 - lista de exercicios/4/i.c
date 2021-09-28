#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Leia um número e imprima o resto da divisão por 7. 
 * Utilize o comando resto (a,b) na linguagem C (a % b).
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int num, resto;
   const int divisor = 7;

   setlocale(LC_ALL, "portuguese");
   printf("Digite um número: ");
   scanf("%i",&num);

   resto = (num % divisor);

   printf("O resto da divisão é: %i",resto);
}