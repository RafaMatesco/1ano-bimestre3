Algoritmo "semnome"

Var

matriz: vetor [1..20] de inteiro
matrizb: vetor [1..20] de inteiro
matrizc: vetor [1..20] de inteiro
x:inteiro
y:inteiro
cont:inteiro

Inicio

para x de 1 ate 20 passo 1 faca
		escreval("digite o numero da matriz A na linha: ", x)
		leia(matriz[x])

fimpara
escreval("=======================================================")
escreval("")
escreval("")
para x de 1 ate 20 passo 1 faca
		escreval("digite o numero da matriz B na linha : ", x)
		leia(matrizb[x])
		matrizc[x] <- (matriz[x] - matrizb[x])
fimpara

para x de 1 ate 20 passo 1 faca
		escreva("matrizA(", cont)
      escreva(") - matrizB(", cont)
      escreval(") = ", matrizc[x])
      cont <- cont + 1
fimpara


Fimalgoritmo