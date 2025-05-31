#include <stdio.h>

    int main() {
        int matriz[100][100];
        int linha, coluna;
        int i, j;
        int teste = 1; 

        printf("quantas linhas e colunas: ");
        scanf("%d %d", &linha, &coluna);
  
        for (i = 0; i < linha; i++) {
            for (j = 0; j < coluna; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
     
        for (i = 0; i < linha; i++) {
            for (j = 0; j < coluna; j++) {
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }
    return 0;
}
