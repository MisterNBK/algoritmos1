#include <stdio.h>

int main() {
    float tempo, kmInicial, kmFinal, velocidadeInicial, velocidadeFinal;
    float mediaVelocidade, aceleracao, distanciaTotal;
    scanf("%f %f %f %f %f", &tempo, &kmInicial, &kmFinal, &velocidadeInicial, &velocidadeFinal);

  
    mediaVelocidade = (kmFinal - kmInicial) / tempo;
    aceleracao = (velocidadeFinal - velocidadeInicial) / tempo;
    distanciaTotal = kmInicial + (velocidadeInicial * tempo) + (aceleracao * tempo * tempo) / 2;

    printf("%f m/s\n%f m/s*s\n%f m\n", mediaVelocidade, aceleracao, distanciaTotal);
    return 0;
}