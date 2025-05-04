#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);


    int validador2 = 0, validador3 = 0, validador5 = 0;

   
    if (numero % 2 == 0) {
        validador2 = 1;
    }

    if (numero % 3 == 0) {
        validador3 = 1;
    }

    if (numero % 5 == 0) {
        validador5 = 1;
    }

    if (validador2 == 1 && validador3 !=1 && validador5 != 1 ){
        printf("2");
        return 0;
    } 
    else if (validador2 == 1 && validador3 == 1 && validador5 != 1){
        printf("2 e 3");
        return 0;
    } 
    else if (validador2 == 1 && validador3 == 1 && validador5 == 1){
        printf("2 e 3 e 5");
        return 0;
    }
    else if (validador2 == 1 && validador3 != 1 && validador5 == 1){
        printf("2 e 5");
        return 0;
    }

    else if (validador2 != 1 && validador3 == 1 && validador5 != 1){
        printf("3");
        return 0;
    }
    else if (validador2 != 1 && validador3 == 1 && validador5 == 1){
        printf("3 e 5");
        return 0;
    }
    else if (validador2 != 1 && validador3 != 1 && validador5 == 1){
        printf("5");
        return 0;
    } 

    if (validador2 != 1 && validador3 != 1 && validador5 != 1) {
        printf("Nenhum (2, 3 ou 5)");
        return 0;
    }

    return 0;
}
