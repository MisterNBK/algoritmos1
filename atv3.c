#include <stdio.h>

int main() {
    int matriz[100][100];
      int linha, coluna, i, j, maior;

    
    printf("quantas linhas e colunas: ");
    scanf("%d %d", &linha, &coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]); 
        }
    }
    maior = matriz[0][0];

   
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior valor na matriz eh: %d\n", maior);

    return 0;
}