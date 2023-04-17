Algoritmo "semnome"

Var

matriz: vetor [1..15] de inteiro
matrizb: vetor [1..15] de inteiro
x:inteiro

Inicio

para x de 1 ate 15 passo 1 faca
		escreval("digite o numero da matriz A na linha: ", x)
		leia(matriz[x])
		matrizb[x] <- (matriz[x] * matriz[x])
fimpara

para x de 1 ate 15 passo 1 faca
		escreva("Matriz B [", x)
      escreval("] = ", matrizb[x])
fimpara


Fimalgoritmo