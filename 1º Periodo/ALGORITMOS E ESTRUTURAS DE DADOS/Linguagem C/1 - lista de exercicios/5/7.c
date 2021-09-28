#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler um valor inteiro do teclado e dizer se pertence aos intervalos
 * fechados [15:45] ou [66:99]
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

static int intervaloFechado(int num, int min, int max);

int main(){
   int num;

   setlocale(LC_ALL, "portuguese");
   printf("Digite um número: ");
   scanf("%i",&num);

   int pertence15a45 = intervaloFechado(num, 15, 45);
   int pertence66a99 = intervaloFechado(num, 66, 99);

   if(pertence15a45){
       printf("%i pertence {15:45} mas não pertence ao intervalo {66:99}", num);
   }else if(pertence66a99){
       printf("%i pertence {66:99} mas não pertence ao intervalo {15:45}", num);
   }else{
       printf("%i não pertence os intervalos {66:99} e {15:45}", num);
   }
}

int intervaloFechado(int num, int min, int max){
    return num >= min && num <= max;
}