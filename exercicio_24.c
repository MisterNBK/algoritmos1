#include <stdio.h>
#define PI 3.14159
int main() {
    int escolha;
    float lado, raio;
    float base, altura;
    float qaudrado, circulo, retangulo;
    scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                scanf("%f", &lado);
                qaudrado = lado * lado;
                printf("%f", qaudrado);
                break;
            case 2: 
                scanf("%f %f", &base, &altura);
                retangulo = base * altura;
                printf("%f", retangulo); 
                break;
            case 3:
                scanf("%f", &raio);
                circulo = PI * (raio * raio);
                printf("%f",circulo);
                break;
            default:
             printf("erro\n");
                break;
        }

    return 0;
}
