#include <stdio.h>
    int main(){

        int numero;
        scanf("%d", &numero);

        if(numero % 2 ==0){
            printf("par");
            return 0;
        }else{
            printf("impar");
            return 0;
        }

        return 0;
    }