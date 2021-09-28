#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * ler um c�digo do teclado e  mostrar o nome correspondente, de acordo com a lista: 
 * 221 Bernardo
 * 211 Eust�quio 
 * 311 Luiz 
 * 312 M�rio 
 * 332 Artur
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

enum nomes {bernado = 221, eustaquio = 211, luiz = 311, mario = 312, arthur = 332} nome;

int main(){

   setlocale(LC_ALL, "portuguese");
   printf("Digite um n�mero: ");
   scanf("%d",&nome);

   switch(nome){
      case bernado:
         printf("Bernardo");
         break;
      case eustaquio:
         printf("Eust�quio");
         break;
      case luiz:
         printf("Luiz");
         break;
      case mario:
         printf("M�rio");
         break;
      case arthur:
         printf("Artur");
         break;
         default:
         printf("N�o h� nome correspondente");
   }
   return 0;
}