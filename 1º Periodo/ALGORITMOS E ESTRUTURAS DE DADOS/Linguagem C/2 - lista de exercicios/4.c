#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Leia um valor X e se ele for menor que 0 avalie Y = x2+ 4.
 * Se ele for maior que 0 avalie x3-3 e se ele for igual a 0 de uma mensagem de erro.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int x;
   int y;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o valor de x: ");
   scanf("%d",&x);

   if(x < 0){
       y = (x*2)+4;
       printf("O valor de Y é %d", y);
   }else if(x > 0){
       y = (x*3)-3;
       printf("O valor de Y é %d", y);
   }else{
       printf("Valor digitado invalido!");
   }
    return 0;
}