#include <stdio.h>
#include <stdlib.h>

/*
 * Média
 *
 * Author: Marco Willy Azevedo Gomes
 * Since: 04/09/2021
*/

int main(){
    double media, a, b, soma;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    soma = a + b;
    media = soma/2;

    printf("A media de %d e %d e igual a %5.2f",a,b,media);
    return 0;
}
