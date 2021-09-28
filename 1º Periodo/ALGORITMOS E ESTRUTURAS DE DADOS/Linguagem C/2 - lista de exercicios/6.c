#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z
 * e verifique se o n�mero X � divis�vel por Y e por Z.
 * O algoritmo dever� mostrar as poss�veis mensagens:
 * -o n�mero � divis�vel por Y e Z.
 * -o n�mero � divis�vel por Y mas n�o por Z.
 * -o n�mero � divis�vel por Z mas n�o por Y.
 * -o n�mero n�o � divis�vel nem Y nem por Z.
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
       printf("O n�mero: %d � divis�vel por %d e %d", x, y, z);
   }else if(x % y == 0){
       printf("O n�mero: %d � divis�vel por %d mas n�o por %d", x, y, z);
   }else if(x % z == 0){
       printf("O n�mero: %d � divis�vel por %d mas n�o por %d", x, z, y);
   }else{
       printf("O n�mero: %d n�o � divis�vel por %d nem por %d", x, z, y);
   }
   return 0;
}