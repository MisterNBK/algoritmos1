#include <stdio.h>
    int main(){
        float numero;
        int limiteInicial, limiteFinal;
          scanf("%f %d %d", &numero, &limiteInicial, &limiteFinal);
     
          if (numero >= limiteInicial && numero <= limiteFinal) {
            printf("dentro\n");
            return 0;
          } else {
            printf("fora\n");
            return 0;
          }
        }
    