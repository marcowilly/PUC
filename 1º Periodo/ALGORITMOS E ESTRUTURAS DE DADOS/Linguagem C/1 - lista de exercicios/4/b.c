#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Calcule a média aritmética de quatro números inteiros dados.
 *
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
    int total = 0;
    int count = 0;
    int const limit = 4;
    setlocale(LC_ALL, "portuguese");
    while(count++ < limit){
        int numero;
        printf("Digite um número: ");
        scanf("%i", &numero);
        total += numero;
    }
    float const media = total/limit;
    printf("A média aritmetica é %.2f.", media);
}