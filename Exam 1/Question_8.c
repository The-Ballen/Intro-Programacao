#include <stdio.h>

int main() {
    int array[5][5], biggest = -999, maxLine, minimax;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            //printf("\nDigite o valor do elemento %dx%d: ", i, j);
            scanf("%d", &array[i][j]);
            if ((array[i][j] > biggest) || ((i==0) && (j==0))) {
                biggest = array[i][j];
                maxLine = i;
            }
        }
    }

    minimax = biggest;
    for (int i = 0; i < 5; i++) {
        if (array[maxLine][i] < minimax) {
            minimax = array[maxLine][i];
        }
    }

    printf("\n\nMinimax = %d", minimax);

    return 0;
}
