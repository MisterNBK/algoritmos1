/*o programa recebe 5 valores inteiros e os ordena de forma crescente utilizando a logica bubble sort
primeiro o programa armazena os 5 valores dentro de um array 'vetor' de tamanho 5
as variaveis 'i' e 'j' sao as variaveis responsaveis por serem as contadoras para os lacos de repeticoes e para auxiliar a percorrer as posicoes do vetor
utilizamos o primeiro o laço for para percorrer o vetor repetidamente pela lista, resultando  no maior valor sendo movido para o final da posicao ao final de cada execucao
ja o segundo laço for é responsavel por ordenar e comparar os valores entre as posicoes recebendo como inicial +1 em relacao ao inicial do primeiro laco para realizar a comparacao entre as posicoes
a estrutura de condicao if verifica se o valor na posicao indicada pelos contadores e maior que o valor na posicao posterior
caso a condicao se cumpra o valor da posicao atual e armazenado com a ajuda de uma variavel auxiliar 'novomin' para que quando o valor da posicao posterior(menor que a posicao atual) for passado para ela, ela possa ser realocada novamente no lugar do valor da posicao posterior sem que seja perdido o valor
apos a realizacao de cada repeticao ate que todos os valores maiores sejam jogados para o final do vetor de forma ordenada o programa imprime na tela os valores de cada posicao dessa vez de forma ordenada
*/

#include <stdio.h>
int main(){
   
    int vetor[5];
    int min, novomin, i, j;

    printf("Digite 5 numero:\n");
    for (i = 0; i < 5; i++){

        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++){

        for (j = i + 1; j < 5; j++){

            if (vetor[i] > vetor[j]){

                novomin = vetor[i];
            //  vetor[i-1] = novomin
                vetor[i] = vetor[j];
                vetor[j] = novomin;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}