#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Leia um n�mero e imprima seu sucessor.
 *
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
    int numero;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um n�mero: ");
    scanf("%i", &numero);
    printf("O sucessor � %i.", ++numero);
}