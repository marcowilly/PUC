#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   char valor;

   setlocale(LC_ALL, "portuguese");
   printf("Digite uma letra: ");
   scanf("%c",&valor);

   if('A' <= valor && valor <= 'Z'){
       printf("%c é maiusculo.");
   }
}