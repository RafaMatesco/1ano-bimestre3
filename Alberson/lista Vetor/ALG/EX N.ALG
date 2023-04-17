Algoritmo "semnome"

Var
temp : vetor[1..20]de real
 c : inteiro
 x, y, z : real
Inicio

 y <- 99999999
  para c de 1 ate 20 faca
    escreval ("digite a", c, "° temperatura")
   leia (temp[c])
   se (temp[c]>x) entao
   x<-temp[c]
   fimse
    se (temp[c]<y) entao
   y<-temp[c]
   fimse
   z<-z+temp[c]


  fimpara
   z<-z/20

    escreval ("maior temperatura =", x)
    escreval ("menor temperatura =", y)
    escreval ("media da temperatura =", z)
Fimalgoritmo