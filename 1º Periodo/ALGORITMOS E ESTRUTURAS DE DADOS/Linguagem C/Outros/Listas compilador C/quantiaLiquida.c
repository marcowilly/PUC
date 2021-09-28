#include <stdio.h>
#include <stdlib.h>

/*
 * Uma empresa contrata um encanador a R$ 20.00 por dia.
 * Crie um programa que solicite o número de dias trabalhados pelo encanador
 * e imprima a quantia líquida que deverá ser paga, sabendo-se que são
 * descontados 8% de impostos.
 *
 * Author: Marco Willy Azevedo Gomes
 * Since: 04/09/2021
*/

int main(){
    double valorTotal, valorLiquido;
    double imposto = 8;
    double valorDia = 20.0;
    int diasTrabalhados;

    printf("Quantos dias trabalhou? ");
    scanf("%d", &diasTrabalhados);

    valorTotal = valorDia * diasTrabalhados;
    valorLiquido = valorTotal - (valorTotal * imposto / 100);

    printf("A quantida liquida � R$ %.2f",valorLiquido);
    return 0;
}
