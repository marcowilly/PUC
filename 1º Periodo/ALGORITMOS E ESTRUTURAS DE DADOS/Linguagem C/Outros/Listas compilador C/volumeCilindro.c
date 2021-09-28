#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Calcula o volume do cilindro.
 *
 * Author: Marco Willy Azevedo Gomes
 * Since: 04/09/2021
*/

int main(){
    double volume, raio, altura;
    double const PI = 3.1415;

    printf("Digite o raio do cilindro: ");
    scanf("%d", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%d",&altura);

    volume = PI * (raio, 2)*altura;

    printf("O volume do cilindro e %d",volume);
    return 0;
}
