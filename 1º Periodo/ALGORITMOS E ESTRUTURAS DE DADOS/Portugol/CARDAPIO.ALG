Algoritmo "Cardapio"
//O cardápio de uma lanchonete é dado abaixo. Prepare um programa que leia
//a quantidade de cada item que você consumiu e calcule a conta final.
Var

   valorDigitado: Inteiro
   valorTotal, hamburger, cheeseburger, fritas, refrigerante, milkshake: Real
   
Inicio
   valorTotal <- 0.00
   hamburger <- 30.00
   cheeseburger <- 35.50
   fritas <- 20.50
   refrigerante <- 10.00
   milkshake <- 30.00
   valorDigitado <- -1
   ENQUANTO valorDigitado <> 0 FACA
      escreval("CARDAPIO - Digite a opção escolhida")
      escreval("[1] - Hambúrguer... R$ ",hamburger:4:2)
      escreval("[2] - Cheeseburger... R$ ",cheeseburger:4:2)
      escreval("[3] - Fritas... R$ ",fritas:4:2)
      escreval("[4] - Refrigerante... R$ ",refrigerante:4:2)
      escreval("[5] - Milkshake... R$ ",milkshake:4:2)
      escreval("[0] - Pedir a conta")
      leia(valorDigitado)
      
      ESCOLHA valorDigitado
         CASO 1
            valorTotal <- hamburger + valorTotal
         CASO 2
            valorTotal <- cheeseburger + valorTotal
         CASO 3
            valorTotal <- fritas + valorTotal
         CASO 4
            valorTotal <- refrigerante + valorTotal
         CASO 5
            valorTotal <- milkshake + valorTotal
         CASO 5
            escreval("Opção invalida")
      FIMESCOLHA
      
   FIMENQUANTO
   escreva("O valor da comanda é R$ ",valorTotal:6:2)

Fimalgoritmo