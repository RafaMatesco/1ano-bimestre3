Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/08/2021
Var

temp, fahr : vetor[1..25] de real
c : inteiro

Inicio



para c de 1 ate 25 faca
    escreval ("digite a", c, "° temperatura")
   leia (temp[c])
fimpara


 para c de 1 ate 25 faca
    fahr[c]<-(temp[c]*5/9)+32
 fimpara


   para c de 1 ate 25 faca
    escreval ("celcius", temp[c])
    escreval ("fahrenheit",fahr[c])
   fimpara
Fimalgoritmo