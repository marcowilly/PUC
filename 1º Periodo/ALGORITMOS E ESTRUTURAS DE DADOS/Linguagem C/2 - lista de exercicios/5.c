#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Construa um algoritmo que receba como entrada três valores (A,B e C).
 * Após o processamento o menor valor deverá estar em A e o maior valor em C,
 * e o valor intermediário em B. Imprima A,B e C.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   float a;
   float b;
   float c;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o valor de A: ");
   scanf("%f",&a);

   printf("Digite o valor de B: ");
   scanf("%f",&b);

   printf("Digite o valor de C: ");
   scanf("%f",&c);

   printf("Valores iniciais de A: %.2f, B: %.2f, C: %.2f",a,b,c);

   float trocaValor;
   if(a > b && b > c){
       trocaValor = a;
       a = c;
       c = trocaValor;
   }else if(b > a && a > c){
       trocaValor = a;
       a = c;
       c = b;
       b = trocaValor;
   }else if(c > a && a > b){
       trocaValor = a;
       a = b;
       b = trocaValor;
   }else if(a > c && c > b){
       trocaValor = a;
       a = b;
       b = c;
       c = trocaValor;
   }

   printf("\nValores pós processamento A: %.2f, B: %.2f, C: %.2f",a,b,c);
   return 0;
}