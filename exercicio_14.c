#include <stdio.h>

float raizQ(float delta){

    float raiz = delta / 2.0;
    float diferenca;

    for (diferenca = raiz * raiz - delta; diferenca > 0; diferenca = raiz * raiz - delta){

        raiz = (raiz + delta / raiz) / 2.0;

        if (diferenca < 0){


            diferenca = -diferenca;
        }
    }

    return raiz;
}


    int main(){

        float a, b, c;
        float delta1;
        float raiz;
        float bhaskara1, bhaskara2;
        scanf("%f %f %f", &a, &b, &c);

        delta1 = (b * b) - (4 * a * c);

        if (delta1 < 0){
            printf("Delta negativo, raizes inexistente\n");
            return 1;
        }

        raiz = raizQ(delta1);

        bhaskara1 = (-b + raiz) / (2 * a);
        bhaskara2 = (-b - raiz) / (2 * a);
        printf("x1: %.2f\nx2: %.2f\n", bhaskara1, bhaskara2);

        return 0;
    }
