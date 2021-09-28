#include <stdio.h>
#include <stdlib.h>

/*
 * Soma
 *
 * Author: Marco Willy Azevedo Gomes
 * Since: 04/09/2021
*/

int main(){
    double a, b, soma;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    soma = a + b;

    printf("A soma de %d e %d e igual a %5.2f",a,b,soma);
    return 0;
}
