#include <stdio.h>
    int main(){
        int segundos, horas, minutos, tempo;
        scanf("%d", &segundos);

        horas = segundos / 3600;
        minutos = (segundos % 3600) / 60;
        tempo = segundos % 60;

        printf("%d:%d:%d\n", horas, minutos, tempo);

        return 0;
    }