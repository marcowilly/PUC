#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos
 * para os quais fornece a quantidade de ração em gramas. Faça um algoritmo que receba
 * o peso do Saco de ração e a quantidade de ração fornecida para cada gato.
 * Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias 
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/  

int main(){
   float peso, quantidadeFornecida, resto;
   const int gatos = 2, diasFornecimento = 5;

   setlocale(LC_ALL, "portuguese");
   printf("Digite o peso do saco de ração (Kg): ");
   scanf("%f", &peso);
   peso = peso * 1000;

   printf("Digite a quantidade fornecida de ração para cada gato (gramas): ");
   scanf("%f", &quantidadeFornecida);

    resto = (peso - (quantidadeFornecida * gatos * diasFornecimento))/1000;

   printf("Restará %.2f (Kg) de ração no saco após %i dias.", resto, diasFornecimento);
}