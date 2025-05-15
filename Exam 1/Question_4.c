#include <stdio.h>

int main() {
    int a, b, c, temp, min, med, max;

    //printf("Digite o primeiro valor: ");
    scanf("%d%d%d", &a, &b, &c);

    // Algoritmo 1
    
    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    med = a + b + c - min - max;

    // Algoritmo 2

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("\nAlgoritmo 1: %d %d %d", min, med, max);
    printf("\nAlgoritmo 2: %d %d %d", a, b, c);

    return 0;
}
