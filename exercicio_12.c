#include <stdio.h>
    int main(){
        float nota1,nota2,nota3,media;
        int peso1,peso2,peso3;
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        scanf("%d %d %d", &peso1, &peso2, &peso3);

        media = (((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / 3);
        printf("media:%f", media);

        return 0;
    }