#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*
 * Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO.
 * O custo da �gua varia dependendo do tipo do consumidor -residencial, comercial ou industrial.
 * A regra para calcular a conta e:
 * ?Residencial: R$ 75,00 de taxa mais R$ 3,50 por m� gastos;
 * ?Comercial: R$ 500,00 para os primeiros 80 m� gastos mais R$ 5,50 por m� gastos acima dos 80 m�;
 * ?Industrial: R$ 800,00 para os primeiros 100 m� gastos mas R$ 8,00 por m� gastos acima dos 100 m�;
 * O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de �gua em metros cubos.
 * Como resultado imprimir o valor a ser pago pelo mesmo.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

enum tipo_consumidor {residencial = 1, comercial, industrial} consumidor;

int main(){
   printf("Digite o perfil do consumidor: ");
   scanf("%d",&consumidor);
  
  if((consumidor >= residencial) && (consumidor <= industrial)){
    int consumo;
    float valorTotal = 0;
    printf("Digite o consumo de agua em m� ex: 80: ");
    scanf("%d",&consumo);
   
    switch(consumidor){
      case residencial:
        valorTotal = 75 + (3.5) * consumo;
        printf("valor da conta: R$ %.2f - Tipo de cliente residencial - consumo: %d m�", valorTotal, consumo);
        break;
      case comercial:
        if(consumo <= 80){
          valorTotal = 500;
        }else{
          valorTotal = 500 + ((consumo - 80) * 5.5);
        }
        printf("valor da conta: R$ %.2f - Tipo de cliente comercial - consumo: %d m�", valorTotal, consumo);
        break;
      case industrial:
      if(consumo <= 100){
          valorTotal = 800;
        }else{
          valorTotal = 800 + ((consumo - 100) * 8);
        }
        printf("valor da conta: R$ %.2f - Tipo de cliente industrial - consumo: %d m�", valorTotal, consumo);
        break;
    }
  } else {
    printf("Valor INVALIDO!!!\n");
    printf("Os valores validos para os tipos de clientes sao: \n\n");
    for(consumidor = residencial; consumidor <= industrial; consumidor++)
      printf("Tipo de consumidor: %d \n",consumidor);
  }
  return 0;
}