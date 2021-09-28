#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Pedro comprou um saco de Ra��o com peso em quilos. Pedro possui 2 (dois) gatos
 * para os quais fornece a quantidade de ra��o em gramas. Fa�a um algoritmo que receba
 * o peso do Saco de ra��o e a quantidade de ra��o fornecida para cada gato.
 * Calcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias 
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/  

int main(){
   float peso, quantidadeFornecida, resto;
   const int gatos = 2, diasFornecimento = 5;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o peso do saco de ra��o (Kg): ");
   scanf("%f", &peso);
   peso = peso * 1000;

   printf("Digite a quantidade fornecida de ra��o para cada gato (gramas): ");
   scanf("%f", &quantidadeFornecida);

    resto = (peso - (quantidadeFornecida * gatos * diasFornecimento))/1000;

   printf("Restar� %.2f (Kg) de ra��o no saco ap�s %i dias.", resto, diasFornecimento);
}