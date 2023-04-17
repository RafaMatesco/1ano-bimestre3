Algoritmo "semnome"
// Disciplina  :  INTRODUÇÃO A PROGRAMAÇÃO DE COMPUTADORES e INFORMÁTICA APLICADA 
// Professor   : ALBERSON WANDER SÁ DOS SANTOS 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/08/2021
Var

a:vetor [1..5] de inteiro
b:vetor [1..5] de inteiro
c:vetor [1..5] de inteiro
d:vetor [1..15] de inteiro
x:inteiro
y:inteiro

Inicio

para x de 1 ate 5 passo 1 faca
	escreva("Vetor a [", x)
   escreval("]: ")
	leia(a[x])
	d[x] <- a[x]
fimpara

para x de 1 ate 5 passo 1 faca
 escreva("Vetor b [", x)
   escreval("]: ")
	leia(b[x])
fimpara

para x de 1 ate 5 passo 1 faca
 escreva("Vetor c [", x)
   escreval("]: ")
	leia(c[x])
fimpara

x <- 1
para y de 6 ate 10 passo 1 faca
		d[y] <- b[x];
		x <- x + 1
fimpara

x <- 1 
para y de 11 ate 15 passo 1 faca
		d[y] <- c[x]
      x <- x + 1
fimpara

para x de 1 ate 15 passo 1 faca
     escreva("vetor d [", x)
     escreval("] = ", d[x])
fimpara


Fimalgoritmo