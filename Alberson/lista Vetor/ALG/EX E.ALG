Algoritmo "semnome"
Var

   fatorial : inteiro
   p , contador : inteiro

   b, a: vetor [1..15] de inteiro


Inicio
      para contador de 1 ate 15 faca
           escreval ("digite elemento [", contador, "]")
           leia (a[contador])
      fimpara


      para  p de 1 ate 15 passo 1 faca
         fatorial <-1
         para contador de 1 ate    a[p]             passo 1 faca
              fatorial <-fatorial * contador
         fimpara
         b[p] <- fatorial
     fimpara


     para contador de 1 ate 15 faca
          Escreval (a[contador] , " fatorial = " , b[contador] )
     fimpara

Fimalgoritmo
