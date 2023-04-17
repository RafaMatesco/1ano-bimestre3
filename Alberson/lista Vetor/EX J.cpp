#include <stdio.h>

int matrizA[20] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
int matrizB[20];
int j;
int i;
int main(void)
{
    for (j = 0; j < 20; j++) { matrizB[j] = matrizA[j] * 3; }
    for (i = 0; i < 20; i++) { printf("%d\n", matrizB[i]); };
    return NULL;
}
