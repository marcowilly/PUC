Algoritmo "volumeCilindro"
//Calcula o volume do cilindro.

Var
   volume, raio, altura: Real
Inicio
   escreva("Digite o raio do cilindro: ")
   leia(raio)
   escreva("Digite a altura do cilindro: ")
   leia(altura)
   volume <- PI*(raio*raio)*altura
   escreva("O volume do cilindro é ",volume:2)
Fimalgoritmo