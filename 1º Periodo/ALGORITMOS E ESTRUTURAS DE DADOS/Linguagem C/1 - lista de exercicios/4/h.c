#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Ler dois números inteiros para variáveis A e b. Trocar o valor de b com o de a,
 * e imprimi-los.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
    int a, b, c;

    setlocale(LC_ALL, "portuguese");
    printf("Digite o valor de A: ");
    scanf("%i",&a);

    printf("Digite o valor de B: ");
    scanf("%i",&b);

    c = a;
    a = b;
    b = c;

    printf("Valores trocados - A: %i - B: %i", a, b);
}