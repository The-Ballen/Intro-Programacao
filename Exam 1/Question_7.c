#include <stdio.h>

int main() {
    int m, n;

    printf("Digite o número de linhas da matriz esparsa: ");
    scanf("%d", &m);
    printf("\nDigite o número de colunas da matriz esparsa: ");
    scanf("%d", &n);
    int matriz[m][n], matrizCond[m*n][3], currentElement = 0;;

    // Lendo elementos da matriz esparsa
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j){
            printf("\nDigite o valor do elemento %dx%d: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] != 0) {
                matrizCond[currentElement][0] = matriz[i][j];
                matrizCond[currentElement][1] = i;
                matrizCond[currentElement][2] = j;
                currentElement++;
            }
        }
    }
    // Imprimindo matriz esparza
    printf("\n\nMatriz esparza:\n");
    for (int i = 0; i < m; ++i) {
        printf("%d %d %d\n", matriz[i][0], matriz[i][1], matriz[i][2]);
    }
    // Imprimindo matriz condensada
    printf("\n\nMatriz condensada:\n");
    for (int i = 0; i < currentElement; ++i) {
        printf("%d %d %d\n", matrizCond[i][0], matrizCond[i][1], matrizCond[i][2]);
    }

    return 0;
}
