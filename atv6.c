#include <stdio.h>

int main() {
    int matriz[100][100];
    int matriz2[100][100];
    int produto[100][100];
    int linha1, coluna1, linha2, coluna2;
    int i, j, k;

    printf("quantas linhas e colunas matriz1: ");
    scanf("%d %d", &linha1, &coluna1);
    printf("quantas linhas e colunas matriz2: ");
    scanf("%d %d", &linha2, &coluna2);

    if (coluna1 != linha2) {
        printf("erro\n");
        return 1;
    }
    printf("matriz 1:\n");
    for (i = 0; i < linha1; i++) {
        for (j = 0; j < coluna1; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("matriz 2:\n");
    for (i = 0; i < linha2; i++) {
        for (j = 0; j < coluna2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < linha1; i++) {
        for (j = 0; j < coluna2; j++) {
            produto[i][j] = 0;
        }
    }

    for (i = 0; i < linha1; i++) {
        for (j = 0; j < coluna2; j++) {
            for (k = 0; k < coluna1; k++) {
                produto[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }

    for (i = 0; i < linha1; i++) {
        for (j = 0; j < coluna2; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}
