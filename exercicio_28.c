/*esse algoritmo le um valor real inserido pelo usuario e o imprime na tela
caso o valor digitado pelo usuario nao seja um numero valido o programa finaliza e retorna uma mensagem de erro
caso contrario imprime o valor para o usuario
*/

#include <stdio.h>
    int main(){
        float valorreal;

        printf("insira um valor");
        scanf("%f",&valorreal);
        if (scanf("%f", &valorreal) != 1) {
            printf("o valor digitado nao e um numero valido\n");
            return 1;
        }

        printf("o valor insirido foi: %f \n",valorreal);
      
        return 0;
    }