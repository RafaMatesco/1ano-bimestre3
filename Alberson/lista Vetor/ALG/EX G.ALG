Algoritmo "semnome"

Var

a:vetor [1..20] de inteiro
b: vetor [1..30] de inteiro
c: vetor [1..50] de inteiro
x:inteiro
y:inteiro

Inicio

para x de 1 ate 20 passo 1 faca
	escreva("Vetor a [",x)
   escreval("]: ")
	leia(a[x])
fimpara

para x de 1 ate 30 passo 1 faca
 escreva("Vetor b [",x)
   escreval("]: ")
	leia(b[x])
fimpara

para x de 1 ate 20 passo 1 faca
	c[x] <- a[x]
fimpara

x <- 1
para y de 21 ate 50 passo 1 faca
		c[y] <- b[x]
		x <- x + 1
fimpara

para x de 1 ate 50 passo 1 faca
     escreva("vetor c [",X)
     escreval("] = ", c[X])
fimpara






Fimalgoritmo