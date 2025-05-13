#include <stdio.h>

int main() {
    int n = 10;
    int array[n];

    // Desloca o array pra direita
    for (int i = (n-1); i >= 0; --i) {
        array[i+1] = array[i];
    }
    array[0] = 0;
    
    // Desloca o array pra esquerda
    for (int i = 0; i < (n-1); ++i) {
        array[i] = array[i+1];
    }
    array[n-1] = 0;

    return 0;
}
