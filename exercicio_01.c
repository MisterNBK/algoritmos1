#include <stdio.h>

/*esse algoritmo recebe valores de 3 lados(a,b,c) e retorna se é possivel formar um triangulo e qual tipo ele forma, 
apos receber os valores, utilizando uma estrutura de condicao o programa verifica se é possivel formar um triangulo baseando se na logica de que a soma de 2 lados devem ser maior que o terceiro lado
apos isso se a condicao se cumprir o programa avaliara qual tipo de triangulo ele forma utilizando mais estruturas de condicoes para definicao, caso a condicao nao se cumprir o programa exibira que nao é possivel formar um triangulo
*/
int main(){

    float ladoA, ladoB, ladoC;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &ladoA);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &ladoB);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &ladoC);


    
if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
        printf("Os valores formam um triangulo.\n");


        if (ladoA == ladoB && ladoB == ladoC){

            printf("O triangulo e equilatero.\n");
        }
        else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC){

            printf("O triangulo e escaleno.\n");
        }

        else if (ladoA == ladoB && ladoB != ladoC){
        
            printf("O triangulo e isosceles.\n");
        }
        else if (ladoA == ladoC && ladoC != ladoB){
        
            printf("O triangulo e isosceles.\n");
        }
        else if (ladoB == ladoC && ladoC != ladoA){
        
            printf("O triangulo e isosceles.\n");
        }
    }
    else{
    
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}