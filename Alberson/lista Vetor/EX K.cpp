#include <stdio.h>

int i;
int j;
int matrizA[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
int matrizB[10];

int main(void)
{
    for (j = 0; j < 10; j++) { matrizB[j] = matrizA[j] * -1; }
    printf("Matriz A: ");
    printf("{");
    for (i = 0; i < 10; i++) { printf("%d, ", matrizA[i]); }
    printf("}");
    printf("\nMatriz B: ");
    printf("{");
    for (i = 0; i < 10; i++) { printf("%d, ", matrizB[i]); };
    printf("}");
    return NULL;
}