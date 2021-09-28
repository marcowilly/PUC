#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos,
 * calcule e mostre a média ponderada dessas notas.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 09/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
    float somaNotas = 0;
    int somaPesos = 0;
    int count = 0;
    int const limit = 3;
    setlocale(LC_ALL, "portuguese");
    while(count++ < limit){
        float nota;
        int peso;
        printf("Digite a nota: ");
        scanf("%f", &nota);
        printf("Digite o peso: ");
        scanf("%i", &peso);
        somaNotas += (nota * peso);
        somaPesos += peso;
    }
    float const mediaPonderada = somaNotas/somaPesos;
    printf("A média ponderada é %.2f.", mediaPonderada);
}