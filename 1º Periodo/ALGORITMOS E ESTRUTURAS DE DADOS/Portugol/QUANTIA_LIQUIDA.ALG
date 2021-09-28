Algoritmo "quantiaLiquida"
//Uma empresa contrata um encanador a R$ 20.00 por dia.
//Crie um programa que solicite o número de dias trabalhados pelo encanador
//e imprima a quantia líquida que deverá ser paga, sabendo-se que são
//descontados 8% de impostos.
Var
   valorDia, valorTotal, valorLiquido:Real
   imposto, diasTrabalhados: Inteiro
Inicio
   valorDia <- 20.00
   imposto <- 8
   escreva("Quantos dias trabalhou? ")
   leia(diasTrabalhados)
   valorTotal <- valorDia * diasTrabalhados
   valorLiquido <- valorTotal - (valorTotal * imposto / 100)
   escreva("A quantida liquida é R$ ",valorLiquido:5:2)

Fimalgoritmo