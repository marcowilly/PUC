#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Calcular a soma dos termos de uma P.A.
 * lendo os valores do primeiro termo, do segundo termo e do número de termos.
 * 
 * formulas: Sn=n*(a1+an)/2, onde Sn é a soma dos termos, a1 o primeiro termo e an o
 * último termo. O n-ésimotermo de uma progressão aritmética, pode ser obtido por meio
 * da formula: an=a1+(n-1).r, onde r pe a razão da P.A.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int a1, a2, n, sn, r, an;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o primeiro termo: ");
   scanf("%i",&a1);

   printf("Digite o segundo termo: ");
   scanf("%i",&a2);

   printf("Digite a quantidade de termos: ");
   scanf("%i",&n);

   r = a2 - a1;
   an = a1 + (n - 1)*r;
   sn = n *(a1+an)/2;

   printf("Razão: %i\nN-ésimo Termo: %i\nSoma dos termos: %i",r,an,sn);
}