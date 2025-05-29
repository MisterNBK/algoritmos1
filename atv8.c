#include <stdio.h>

int main() {
    int matriz[100][100];
   
    
    int linha, coluna, i, j;

    printf("quantas linhas e colunas nas matrizes: ");
    scanf("%d %d", &linha, &coluna);
    

    printf("Digite os elementos da matriz:\n");
     
    
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]); 
        }
    }
    
    printf("selecione a posicao do elemento: ");
    int p1, p2;
    scanf("%d %d", &p1, &p2);
      //if( i>= 0 && i < linha && j >= 0 && j < coluna) 
    if (p1 >= 0 && p1 < linha && p2 >= 0 && p2 < coluna) {
        printf("o elemento eh: %d\n", matriz[p1][p2]);
    } else {
        printf("erro\n");
        return 1;
    }
    return 0;
}