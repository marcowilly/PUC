#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento,
 * calcule e mostre o novo salário.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   float salario, percentual, novoSalario;

   setlocale(LC_ALL, "portuguese");

   printf("Digite o salário do funcionario R$: ");
   scanf("%f", &salario);

   printf("Digite o percentual de aumento salarial: ");
   scanf("%f", &percentual);

   novoSalario = ((salario * percentual)/100) + salario;

   printf("O novo salário é R$ %.2f", novoSalario);
}