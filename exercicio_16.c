#include <stdio.h>
    int main(){
        float salario,reajuste;
        scanf("%f %f", &salario, &reajuste);

        float novoSalario = salario + (salario * (reajuste / 100));
        printf("Novo salario: %.2f\n", novoSalario);

        return 0;
    }