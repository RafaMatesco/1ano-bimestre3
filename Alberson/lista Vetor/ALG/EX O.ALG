Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/08/2021
Var

temp, fahr : vetor[1..25] de real
c : inteiro

Inicio



para c de 1 ate 25 faca
    escreval ("digite a", c, "� temperatura")
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