#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente
 * em Fahrenheit (F). Fórmula de conversão: F = 9/5 * C + 32 Implemente uma
 * alteração neste exercício para verificar o resultado.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   int valorDigitado;
   float temperatura;
   int value;
   setlocale(LC_ALL, "portuguese");

    do{
      printf("Escolha a conversão desejada.\n");
      printf("[1] - Celsius para Fahrenheit\n");
      printf("[2] - Fahrenheit para Celsisus\n");
      printf("[0] - Encerrar Sistema\n");
      scanf("%i", &valorDigitado);

      switch(valorDigitado){
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%i", &value);
            temperatura = ((value * 9)/5) + 32;
            printf("A temperatura em Fahrenheit é %.1f",temperatura);
            break;
         case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%i", &value);
            temperatura = ((value - 32) * 5)/9;
            printf("A temperatura em Celsius é %.1f",temperatura);
            break;
         case 0:
            break;
         default:
            printf("Opção invalida\n");
      }
    }while(valorDigitado != 0 && valorDigitado != 1 && valorDigitado != 2);

    return 0;
}