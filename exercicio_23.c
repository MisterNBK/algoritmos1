/* esse programa é responsavel por calcular fibonnaci a quantidade de vezes que o usuario solicitar

funcao fibonnaci:
o programa utiliza a variavel 'resultado' usada para armazenar o resultado do calculo de fibonnaci, 'inicial' para ser o primeiro valor de fibonnaci(0) e 'proximo' servindo para armazenar o proximo numero da sequencia
com o auxilio de um laço for para realizar o calculo quantas vezes forem solicitadas pelo usuario 
realizando em cada execucao a soma de inicial e proximo e os atualizando para a proxima execucao exibindo a cada vez o valor de resultado

funcao main:
a funcao principal é responsavel por receber a quantidade de vezes que sera necessaria repetir 
chamando a funcao fibonnaci com a quantidade de vezes que a funcao devera se repetir

*/

#include <stdio.h>
int fibonnaci(int qtd)
{
    int resultado, inicial = 0, proximo;
    printf("%d ", inicial);
    proximo = inicial++;
    for (int i = 0; i < qtd; i++)
    {
        resultado = inicial + proximo;
        inicial = proximo;
        proximo = resultado;
        printf("%d ", resultado);
    }
}

int main()
{
    int qtd;
   
    printf("insira a quantidade de vezes que a segunda ira se repetir: ");
    scanf("%d", &qtd);

    fibonnaci(qtd);
    return 0;
}