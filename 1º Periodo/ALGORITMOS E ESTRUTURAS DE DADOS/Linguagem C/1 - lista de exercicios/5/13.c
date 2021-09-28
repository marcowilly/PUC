#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler três valores literais (caracteres) do teclado e dizer se o primeiro
 * está entre os outros dois
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

static void flushIn();

int main(){
   char primeiro, segundo, terceiro;

   setlocale(LC_ALL, "portuguese");
   printf("Digite a primeira letra: ");
   scanf("%c",&primeiro);

   flushIn();
   printf("Digite a segunda letra: ");
   scanf("%c",&segundo);

   flushIn();
   printf("Digite a terceira letra: ");
   scanf("%c",&terceiro);

   if(segundo < primeiro && terceiro > primeiro && segundo < terceiro
   || segundo > primeiro && terceiro < primeiro && segundo > terceiro){
       printf("%c está entre %c e %c", primeiro, segundo, terceiro);
   }
}

void flushIn(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}