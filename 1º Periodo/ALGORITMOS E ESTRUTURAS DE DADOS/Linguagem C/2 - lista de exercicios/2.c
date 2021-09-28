#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre,
 * além do nome e do valor da media do aluno, uma mensagem de "Aprovado",
 * caso a media seja igual ou superior a 6, ou a mensagem "reprovado",
 * caso contrario.
 * 
 * Author: Marco Willy Azevedo Gomes
 * Since: 22/09/2021
 * Encoding: WESTERN(ISO 8859-1)
*/

int main(){
   const int LIMITE = 3;
   char nome[255];
   int count = 0;
   float somaNotas = 0;

   setlocale(LC_ALL, "portuguese");
   printf("Qual o nome: ");
   gets(nome);

   do{
    float nota;
    printf("Digite a %dª nota: ",++count);
    scanf("%f",&nota);
    somaNotas += nota;
   }while(count < LIMITE);

   if(somaNotas / LIMITE >= 6){
       printf("Aluno %s aprovado!",nome);
   }else{
       printf("Aluno %s reprovado!",nome);
   }
    return 0;
}