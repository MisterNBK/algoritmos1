/* o programa presente é responsavel por calcular a idade da pessoa em meses e retornar o valor na tela
primeiramente o programa informa que o calculo de meses e calculado usando o dia 15/04/2025 data em que foi construido esse codigo
apos receber os tres valores sendo o dia o mes e o ano de nascimento o programa calcula a resultado com base na data atual descrita
usando a data descrita pelo programa, o ano de nascimento do usuario e calculado usando a uma formula para conversao de anos em meses
caso o dia de nascimento do usuario ainda nao tiver chegado a estrutura de condicao if diminui o valor dos meses em 1, pois aquele mes ainda nao foi completado pelo usuario 
*/
#include <stdio.h>
int main() {
    int anoNascimento, mesNascimento,diaNascimento;
    int mesescontados;
   
    printf("******* nota: o programa calcula a quantidade de meses com base na presente data(15/04/2025. 15 de abril de 2025)*******");
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o mes de nascimento (1-12): ");
    scanf("%d", &mesNascimento);

   
    mesescontados = (2025 - anoNascimento) * 12 + (4 - mesNascimento);
    if(diaNascimento<15){
        mesescontados--;
    }

 
    printf("Sua idade em meses e: %d \n", mesescontados);

    return 0;
}