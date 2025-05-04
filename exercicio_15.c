#include <stdio.h>


int main(){

    float ladoA, ladoB, ladoC;
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
    
if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
        printf("Os valores formam um triangulo.\n");
    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

return 0;
}
