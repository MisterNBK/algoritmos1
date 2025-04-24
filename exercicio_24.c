/*o codigo verifica se a pessoa esta apta ao alistamento militar usando critérios como idade, sexo, nacionalidade e saude
o programa utiliza uma estrutura condicional if para verificar se a pessoa atende aos criterios para o alistamento militar
a idade deve ser maior ou igual a 18 anos, o sexo deve ser masculino, a pessoa deve ser brasileira e nao pode possuir deficiencia 
se todas essas condicoes forem verdadeiras, o programa exibe a mensagem indicando que o cidadão está apto ao alistamento
caso contrario, exibe uma mensagem indicando que o cidadao nao esta apto
*/

#include <stdio.h>

int main() {
    int idade;
    char sexo;
    char nacionalidade;
    char deficiencia;


    printf("Insira a idade: ");
    scanf("%d", &idade);

    printf("Insira o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("e brasileiro: (S/N)");
    scanf(" %c", &nacionalidade);

    printf("Possui alguma deficiencia grave? (S/N): ");
    scanf(" %c", &deficiencia);

    if (idade >= 18 && (sexo == 'M' || sexo == 'm') && 
        (nacionalidade == 'S' || nacionalidade == 's') && 
        (deficiencia == 'N' || deficiencia == 'n')) {

        printf("O cidadao esta apto ao alistamento militar obrigatorio.\n");
    } else {
        printf("O cidadao nao esta apto ao alistamento militar obrigatorio.\n");
    }

    return 0;
}