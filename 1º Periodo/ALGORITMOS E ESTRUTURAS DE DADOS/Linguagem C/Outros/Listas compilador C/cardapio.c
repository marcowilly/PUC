#include <stdio.h>
#include <stdlib.h>

/*
 * O cardapio de uma lanchonete é dado abaixo. Prepare um programa que leia
 * a quantidade de cada item que você consumiu e calcule a conta final.
 *
 * Author: Marco Willy Azevedo Gomes
 * Since: 04/09/2021
*/
int main(){
    int valorDigitado = -1;
    double valorTotal;
    double hamburger = 30.00;
    double cheeseburger = 35.50;
    double fritas = 20.50;
    double refrigerante = 10.00;
    double milkshake = 30.00;

    while(valorDigitado != 0){
      printf("CARDAPIO - Digite a opcao escolhida\n");
      printf("[1] - Hamburguer... R$ %.2f\n",hamburger);
      printf("[2] - Cheeseburger... R$ %.2f\n",cheeseburger);
      printf("[3] - Fritas... R$ %.2f\n",fritas);
      printf("[4] - Refrigerante... R$ %.2f\n",refrigerante);
      printf("[5] - Milkshake... R$ %.2f\n",milkshake);
      printf("[0] - Pedir a conta\n");
      scanf("%d", &valorDigitado);

      switch(valorDigitado){
        case 1:
            valorTotal += hamburger;
            break;
         case 2:
            valorTotal += cheeseburger;
            break;
         case 3:
            valorTotal += fritas;
            break;
         case 4:
            valorTotal += refrigerante;
            break;
         case 5:
            valorTotal += milkshake;
            break;
         case 0:
            break;
         default:
            printf("Opcao invalida\n");
      }
    }
    printf("O valor da comanda e R$ %.2f",valorTotal);

    return 0;
}
