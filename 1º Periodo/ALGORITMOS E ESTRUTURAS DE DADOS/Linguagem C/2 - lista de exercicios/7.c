#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*
 * O numero 3025 possui a seguinte característica:
 * 30 + 25 = 55
 * 55^2 = 3025 Fazer um algoritmo que dado um numero de 4 dígitos 
 * (verifique se o número pertence a faixa) calcule e escreva se ele possui ou não esta característica.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   char texto[4];
   int num1 = 0, num2 = 0, numero = 0;

   setlocale(LC_ALL, "portuguese");
   printf("Digite um numero: ");
   scanf("%s", texto);

   char c;
   for(int i=0; i<strlen(texto);i++) { 
      c = texto[i]; 
      if(c>='0' && c<='9'){ 
         int digit = c - '0'; 
         numero = numero*10 + digit;
         if(i < 2){
            num1 = num1*10 + digit;
         }else{
            num2 = num2*10 + digit;
         }
      } 
   } 

   int soma = num1 + num2;
   int valorElevado = pow(soma, 2);
   if(valorElevado == numero){
      printf("O numero %d possui a característica, %d + %d = %d, %d^2 = %d", numero, num1, num2, soma, soma, valorElevado);
   }else{
      printf("O numero %d não possui a característica, %d + %d = %d, %d^2 = %d", numero, num1, num2, soma, soma, valorElevado);
   }

   return 0;
}