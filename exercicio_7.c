#include <stdio.h>
    int main(){
        float area;
        float comprimento,largura, altura;
        scanf("%f %f %f", &comprimento, &largura, &altura);

        area = comprimento * largura * altura;
        printf("area:%f\n",area);

        return 0;
    }