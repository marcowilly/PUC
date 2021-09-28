#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler tr�s valores literais (caracteres) do teclado e dizer se est�o em ordem
 * crescente lexicograficamente.
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

   if(primeiro < segundo && segundo < terceiro){
       printf("Os valores est�o em ordem alfabetica crescente.");
   }else{
      printf("Os valores n�o est�o em ordem alfabetica crescente."); 
   }
}

void flushIn(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}