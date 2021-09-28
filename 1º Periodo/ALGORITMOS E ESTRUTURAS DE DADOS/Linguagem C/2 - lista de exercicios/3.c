#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   float temperaturaAgua;

   setlocale(LC_ALL, "portuguese");
   printf("Qual a temperatura da agua: ");
   scanf("%f",&temperaturaAgua);

   if(temperaturaAgua <= 0){
       printf("A água está no estado solido.");
   }else if(temperaturaAgua >= 100){
       printf("A água está no estado gasoso.");
   }else{
       printf("A água está no estado liquido.");
   }
    return 0;
}