#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler dois valores reais do teclado e dizer se o primeiro � maior,
 * menor ou igual ao segundo.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   float primeiro, segundo;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o primeiro n�mero: ");
   scanf("%f",&primeiro);

   printf("Digite o segundo n�mero: ");
   scanf("%f",&segundo);

   if(primeiro > segundo){
       printf("%.2f � maior que %.2f",primeiro,segundo);
   }else if(segundo == primeiro){
       printf("%.2f � igual a %.2f",primeiro,segundo);
   }else{
       printf("%.2f � menor que %.2f",primeiro,segundo);
   }
}