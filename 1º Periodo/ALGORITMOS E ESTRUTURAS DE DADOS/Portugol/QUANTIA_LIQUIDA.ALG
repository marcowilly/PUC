Algoritmo "quantiaLiquida"
//Uma empresa contrata um encanador a R$ 20.00 por dia.
//Crie um programa que solicite o n�mero de dias trabalhados pelo encanador
//e imprima a quantia l�quida que dever� ser paga, sabendo-se que s�o
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
   escreva("A quantida liquida � R$ ",valorLiquido:5:2)

Fimalgoritmo