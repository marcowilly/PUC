#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda
 * ou da esquerda para direita tem o mesmo valor. Exemplo: 929, 44, 97379.
 * Fazer um algoritmo que dado um numero de 5 d�gitos;
 * calcule e escreva se este e ou n�o pal�ndromo.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int normal, invertido, aux;

   setlocale(LC_ALL, "portuguese");
   printf("Digite um n�mero: ");
   scanf("%d", &normal);


   while (normal <= 0) {
      printf('Por favor, digite um valor de N maior do que zero: ');
      scanf("%d", &normal);
   }

   invertido = 0;
   aux = normal;

   while (aux > 0) {
      invertido = (invertido * 10) + (aux % 10);
      aux = aux / 10;
   }

   printf("\nNumero normal: %d\nNumero invertido: %d\n", normal, invertido);

   if (normal == invertido) printf("� palindromo.\n\n");
   else printf("Nao � palindromo.\n\n");

 return 0;  
}