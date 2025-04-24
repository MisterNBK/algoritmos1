/*esse codigo recebe 3 letras do alfabetos e ordena de forma alfabetica utilizando a lofica bubble sort
utilizando um laço while o codigo recebe as 3 letras pelo usuario armazenadas em um vetor
com o auxilio da variavel 'i' percorremos o vetor utilizando o primeiro laco for com a funcao de andar por todas as posicoes do vetor
ja com a variavel 'j' realizamos a verificao dos valores da posicao com o auxilio do segundo laço for a comparando com a posicao do vetor na posicao[i], invertendo as posicoes caso o valor na posicao[i] seja maior que o valor na posicao[j]
e usando uma estrutura if para comparar e realizar a troca caso a posicao anterior possua um valor maior que a posicao posterior armazenando seu valor em uma variavel auxiliar para realizar as trocas de posicoes
apos isso retorna ao usuario o vetor de forma ordenada alfabeticamente
*/

#include <stdio.h>

int main(){

    char vetor[3];
    char i = 0, novomin;

    while (i < 3){

        printf("Digite um caractere: ");
        scanf(" %c", &vetor[i]);
        i++;
    }

    for (i = 0; i < 3; i++){

        for (int j = i + 1; j < 3; j++){

            if (vetor[i] > vetor[j]){

                novomin = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = novomin;
            }
        }
    }
    for (int i = 0; i < 3; i++){

        printf("%c ", vetor[i]);
    }
    printf("\n");

    return 0;
}
