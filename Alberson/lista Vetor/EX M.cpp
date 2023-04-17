#include <stdio.h>

int main(void) {

  int calculadora;
  int matriz[10];
  int i;

  printf ("Numero a ser calculado: ");
  scanf("%d", &calculadora);

  for(i=0; i<=10; i++){
    int num = calculadora * i;
    // printf("%d * %d: %d\n",i, num);
    matriz[i]=num;
    printf ("%d * %d = %d\n",calculadora, i, matriz[i]);
  }

  return 0;
}