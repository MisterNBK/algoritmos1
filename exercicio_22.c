#include <stdio.h>
    int main() {
        float eqA1, eqB1, eqC1; 
        float eqA2, eqB2, eqC2;
        float testador, x, y;
        scanf("%f %f %f", &eqA1, &eqB1, &eqC1);
        scanf("%f %f %f", &eqA2, &eqB2, &eqC2);

        testador = eqA1 * eqB2 - eqA2 * eqB1;

        if (testador == 0) {
            printf("erro\n");
            return 1;
        } 
        else {
      
            x = (eqC1 * eqB2 - eqC2 * eqB1) / testador;
            y = (eqA1 * eqC2 - eqA2 * eqC1) / testador;

            printf("%.2f,%.2f\n", x, y);
               }
    return 0;
}
