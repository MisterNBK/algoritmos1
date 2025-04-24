/*O programa calcula e exibe os anos bissextos dentro de um intervalo de anos fornecido pelo usuário,apos receber os valores
Apos receber os valores, o programa verifica se o intervalo é valido atraves de uma estrutura de condicao
uitilizando um laco for para verificar todos os anos se ele é bissexto usando a variavel 'x' como contador
a estrutura de condicao dentro do laco for é responsavel por verificar se um ano é bissexto(um ano e bissexto se for divisivel por 4 e nao divisivel por 100, ou se for divisivel por 400)
o laco for exibira cada ano bissexto a cada verificacao dentro do intervalo e utiliza a variavel 'i' para contar quantos anos bissextos existe dentro do intervalo
*/

#include <stdio.h>
int main() {
    int data1, data2,i=0;

    printf("Digite a menor data (apenas o ano formato: yyyy): ");
    scanf("%d", &data1);
    printf("Digite a maior data (apenas o ano formato: yyyy): ");
    scanf("%d", &data2);

    if (data1 >= data2) {
        printf("data informada nao e valida. \n");
        return 1;
    }

    printf("Anos bissextos entre %d e %d:\n", data1, data2);
    /*utilizando um laço for para verificar todos os anos se ele e bissexto utilizando a regra padrão
     um ano e bissexto se for divisivel por 4 e não divisivel por 100, ou se for divisivel por 400. */
    for (int x = data1; x <= data2; x++) {
        if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
            printf("%d \n", x);
            i++;
        }
    }
    printf("quantidade de anos bissextos: %d\n", i);

    return 0;
}
