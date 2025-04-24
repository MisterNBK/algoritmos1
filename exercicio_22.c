/*o algoritmo recebe dois valores, que sao as resistência de dois resistores em paralelo e calcula a resistencia equivalente entre eles em um circuito paralelo
primeiramente o algoritmo recebe os valores dos resistores
apos isso utilizando a formulda da resistencia equivalente em circuitos paralelos(soma do inverso das resistências individuais)
apos calcular a resistencia equivalente o algoritmo retorna o resultado com 3 casas decimais apos a virgula(padrao)*/

#include <stdio.h>
    int main(){
        float resistor1,resistor2,resistor3,resistorequivalente;

        printf("insira o valor do primeiro resistor em ohms: ");
        scanf("%f",&resistor1);

        printf("insira o valor do segundo resistor em ohms: ");
        scanf("%f",&resistor2);

        resistor3 = (1/resistor1) + (1/resistor2);
        resistorequivalente = (1/resistor3);

        printf("a resistencia equivalente e: %.3f",resistorequivalente);
        return 0;
    }