#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Calcular a soma dos termos de uma P.A.
 * lendo os valores do primeiro termo, do segundo termo e do n�mero de termos.
 * 
 * formulas: Sn=n*(a1+an)/2, onde Sn � a soma dos termos, a1 o primeiro termo e an o
 * �ltimo termo. O n-�simotermo de uma progress�o aritm�tica, pode ser obtido por meio
 * da formula: an=a1+(n-1).r, onde r pe a raz�o da P.A.
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

   printf("Raz�o: %i\nN-�simo Termo: %i\nSoma dos termos: %i",r,an,sn);
}