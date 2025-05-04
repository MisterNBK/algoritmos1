#include <stdio.h>
    int main(){
        float raio = 0;
        scanf("%f",&raio);
        float const pi = 3.14159265358979323846;

        float area = (raio * raio) * pi;

        printf("area do circulo: %.2f",area);

        return 0;
    }