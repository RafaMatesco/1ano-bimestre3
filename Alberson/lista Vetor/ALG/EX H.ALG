Algoritmo "semnome"
// Disciplina  :  INTRODU��O A PROGRAMA��O DE COMPUTADORES e INFORM�TICA APLICADA 
// Professor   : ALBERSON WANDER S� DOS SANTOS 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/08/2021
Var

a: vetor [1..20] de inteiro
b: vetor [1..20] de inteiro
x:inteiro
y:inteiro

Inicio

y <- 20
para x de 1 ate 20 passo 1 faca
	escreva("Vetor a [", x)
   escreval("]: ")
	leia(a[x])
	b[y] <- a[x]
	y <- y - 1
fimpara

para x de 1 ate 20 passo 1 faca
     escreva("vetor b [", x)
     escreval("] = ", b[x])
fimpara


Fimalgoritmo