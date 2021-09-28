#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int num;

   setlocale(LC_ALL, "portuguese");
   printf("Digite um número: ");
   scanf("%i",&num);

   if(num % 2 == 0){
       printf("O número %d é par", num);
   }else{
       printf("O número %d é impar", num);
   }
   return 0;
}