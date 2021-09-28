#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * ler um código do teclado e  mostrar o nome correspondente, de acordo com a lista: 
 * 221 Bernardo
 * 211 Eustáquio 
 * 311 Luiz 
 * 312 Mário 
 * 332 Artur
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

enum nomes {bernado = 221, eustaquio = 211, luiz = 311, mario = 312, arthur = 332} nome;

int main(){

   setlocale(LC_ALL, "portuguese");
   printf("Digite um número: ");
   scanf("%d",&nome);

   switch(nome){
      case bernado:
         printf("Bernardo");
         break;
      case eustaquio:
         printf("Eustáquio");
         break;
      case luiz:
         printf("Luiz");
         break;
      case mario:
         printf("Mário");
         break;
      case arthur:
         printf("Artur");
         break;
         default:
         printf("Não há nome correspondente");
   }
   return 0;
}