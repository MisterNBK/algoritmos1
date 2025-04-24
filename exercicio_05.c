/*
esse programa é responsavel por calcular os valores de bhaskara recebendo os valores de A referente ao numero de X², o valor de B referente ao numero X e o valor de C referente ao numero sem icognita

funcao raizQ:
utilizando uma funcao fora do escopo principal do codigo calculamos o valor da raiz de delta, essa funcao é responsavel por calcular uma raiz quadrada utilizando o metodo newton(Estimativa Atual= (Estimativa Atual + Número Original / Estimativa) / 2)
a funcao comeca inicializando a variavel com a metade do valor de delta, essa variavel representa a estimativa inicial da raiz quadrada
O laço for é utilizado para refinar a estimativa da raiz quadrada, ele continua enquanto a diferença entre o quadrado da estimativa atual e o valor original for maior que zero
a estrutura if dentro do laco verifica se a diferenca calculada e negativa, caso seja, ela e convertida para positiva 
por fim ao ao refinar o maximo possivel o a valor aproximo a funcao retorna o valor como raiz;

funcao main:
a funcao principal é responsavel por receber os valores e calcular a equacao do 2°grau
apos recebermos os valores da equacao utilizamos a formula de delta utilizando os valores de A,B,C
apos ser calculado o valor de delta, utilizamos uma estrutura de condicao if para verificar se o valor de delta e negativo, caso seja o programa exibe uma mensagem de erro e encerra o programa pois nao existe raizes de numeros negativos
sendo delta um valor valido a variavel 'raiz' recebe o valor da funcao 'raizQ' como raiz para calcular o valor de bhaskara e apos isso as valores de bhaskara sao exibidos na tela
*/

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

        printf("insira o valor de A: ");
        scanf("%f", &a);

        printf("insira o valor de B: ");
        scanf("%f", &b);

       
        printf("insira o valor de C: ");
        scanf("%f", &c);

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
