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
   printf("Digite um n�mero: ");
   scanf("%i",&num);

   if(num % 2 == 0){
       printf("O n�mero %d � par", num);
   }else{
       printf("O n�mero %d � impar", num);
   }
   return 0;
}