#include <stdio.h>

int main() {
    int matriz[100][100];
    int matriz2[100][100];
    
    int linha, coluna, i, j;

    printf("quantas linhas e colunas nas matrizes: ");
    scanf("%d %d", &linha, &coluna);
    

    printf("Digite os elementos da matriz:\n");
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]); 
        }
    }
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            matriz2[j][i] = matriz[i][j];
        }
    }
    
    for(i = 0; i < coluna; i++){
        for(j = 0; j < linha; j++){
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}