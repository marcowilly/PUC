#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Desenvolver um algoritmo que leia três números inteiros: X, Y, Z
 * e verifique se o número X é divisível por Y e por Z.
 * O algoritmo deverá mostrar as possíveis mensagens:
 * -o número é divisível por Y e Z.
 * -o número é divisível por Y mas não por Z.
 * -o número é divisível por Z mas não por Y.
 * -o número não é divisível nem Y nem por Z.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int x;
   int y;
   int z;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o valor de X: ");
   scanf("%d",&x);

   printf("Digite o valor de Y: ");
   scanf("%d",&y);

   printf("Digite o valor de Z: ");
   scanf("%d",&z);

   if(x % y == 0 && x % z == 0){
       printf("O número: %d é divisível por %d e %d", x, y, z);
   }else if(x % y == 0){
       printf("O número: %d é divisível por %d mas não por %d", x, y, z);
   }else if(x % z == 0){
       printf("O número: %d é divisível por %d mas não por %d", x, z, y);
   }else{
       printf("O número: %d não é divisível por %d nem por %d", x, z, y);
   }
   return 0;
}