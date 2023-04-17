Algoritmo "semnome"
Algoritmo "semnome"

Var

   a, b, vc : vetor [1..5,1..3] de inteiro
   l, c:inteiro

Inicio

  para l de 1 ate 5 passo 1 faca
    para c de 1 ate 3 passo 1 faca
         escreval (" digite o numero no vetor a [", l, "," , c, "]:")
         leia (a[l,c])
         escreval ("digite o numero no vetor b  [", l, "," ,  c, "]:")
         leia (b[l,c])
    fimpara
  fimpara




   para l de 1 ate 5 passo 1 faca
    para c de 1 ate 3 passo 1 faca
      vc[l,c] <- a[l,c] + b[l,c]
      escreval (" matriz C:", vc[l,c])


    fimpara
  fimpara



Fimalgoritmo