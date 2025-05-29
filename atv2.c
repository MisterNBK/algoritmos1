#include <stdio.h>
int main(){
    int matriz[100][100];
    int linha, coluna, i, j;

    printf("quantas linhas e colunas: ");
    scanf("%d %d", &linha, &coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]); 
        }
    }
    int soma = 0; 
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            soma += matriz[i][j];
        }
    }
    float media = (float)soma / (linha * coluna);
    printf("media dos elementos da matriz: %.2f\n", media);
    

    return 0;
}