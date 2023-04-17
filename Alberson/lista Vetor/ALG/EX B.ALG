Algoritmo "semnome"

Var

matriz: vetor [1..8] de inteiro
matrizb: vetor[1..8] de inteiro
x:inteiro

Inicio

para x de 1 ate 8 passo 1 faca
		escreval("digite o numero da matriz A na linha: ", x)
		leia(matriz[x])
		matrizb[x] <- matriz[x] * 3
fimpara

para x de 1 ate 8 passo 1 faca
		escreva("Matriz B [", x)
      escreval("]: ", matrizb[x])
fimpara

Fimalgoritmo