#include <stdio.h>

/*
    Este algoritmo tem apenas o intuito de servir como exemplificação e inspiração
    da resolução do problema sugerido pelo Desafio I da disciplina.
    
    NÃO tente utilizar esse código na entrega do seu desafio,
    uma vez que várias pessoas entregando exatamente o mesmo código resultaria
    em uma provável anulação da pontuação prometida.
*/

int main(void) {
    int pos_I, pos_J, m, n;

    // Lendo tamanho do grid
    printf("Insira o número de linhas do grid: ");
    scanf("%d", &m);
    printf("\nInsira o número de colunas do grid: ");
    scanf("%d", &n);
    char a[m][n];

    // Lendo cada elemento do grid
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("\nInsira o elemento %dx%d (insira x para célula vazia): ", i, j);
            scanf(" %c", &a[i][j]); // O espaço antes do %c serve para ignorar espaços em branco
            if (a[i][j] == 'x')
                a[i][j] = ' '; // Substituindo o x pelo caractere de espaço (célula vazia do grid)
        }
    }

    // Encontrando a cabeça 'h'
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'h') {
                pos_I = i;
                pos_J = j;
            }
        }
    }
    printf("\n\n[%d,%d]: %c\n", pos_I, pos_J, a[pos_I][pos_J]);

    // Procurando segmentos adjacentes do corpo
    while (1) {
        // tenta cima: espera 'V'
        if (pos_I > 0 && a[pos_I-1][pos_J] == 'V') {
            /*
                A condição "pos_I > 0" serve somente para garantir que
                o algoritmo não vai tentar acessar elementos fora do alcance do arranjo,
                uma vez que não existem elementos com indexação menor que 0.
            */
            pos_I = pos_I - 1;
        }
        // tenta baixo: espera '^'
        else if (pos_I < m-1 && a[pos_I+1][pos_J] == '^') {
            /*
                A condição "pos_I < m-1" também serve somente para garantir que
                o algoritmo não vai tentar acessar elementos além do último elemento do arranjo.
            */
            pos_I = pos_I + 1;
        }
        // tenta esquerda: espera '>'
        else if (pos_J > 0 && a[pos_I][pos_J-1] == '>') {
            pos_J = pos_J - 1;
        }
        // tenta direita: espera '<'
        else if (pos_J < n-1 && a[pos_I][pos_J+1] == '<') {
            pos_J = pos_J + 1;
        }
        else {
            // Caso nenhum segmento adjacente seja encontrado, encerra a execução do loop
            break;
        }
        // Caso seja encontrado um segmento, imprime a sua coordenada
        printf("[%d,%d]: %c\n", pos_I, pos_J, a[pos_I][pos_J]);
    }

    return 0;
}
