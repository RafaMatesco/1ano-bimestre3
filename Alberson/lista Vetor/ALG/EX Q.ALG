Algoritmo "semnome"

Var

  numa, numb : vetor [1..12] de real
  c : inteiro
Inicio

para c de 1 ate 12 passo 1 faca
    escreval ("digite o", c, "° numero")
   leia (numa[c])
fimpara


 para c de 1 ate 12 passo 1 faca
   se (numa[c]) mod 2 = 0 entao
      numb[c]<- numa[c]/2
      escreval ("vetor b", numb[c])
   senao

   fimse
 fimpara





Fimalgoritmo