#include <stdio.h>

    int main() {
        int matriz[100][100];
        int matriz2[100][100];
        int soma[100][100];
        int linha, coluna, i, j;

        printf("quantas linhas e colunas nas matrizes: ");
        scanf("%d %d", &linha, &coluna);

        
        for(i = 0; i < linha; i++){
            for(j = 0; j < coluna; j++){
                scanf("%d", &matriz[i][j]); 
            }
        }
        
        for(i = 0; i < linha; i++){
            for(j = 0; j < coluna; j++){
                scanf("%d", &matriz2[i][j]); 
            }
        }
       
        for(i = 0; i < linha; i++){
            for(j = 0; j < coluna; j++){
                soma[i][j] = matriz[i][j] + matriz2[i][j];
            }
        }

        for(i = 0; i < linha; i++){
            for(j = 0; j < coluna; j++){
                printf("%d ", soma[i][j]);
            }
        }

    return 0;
}