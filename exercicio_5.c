#include <stdio.h>
    int main(){
        int anos,meses,dias;
        scanf("%d %d %d", &anos, &meses, &dias);

        int diasContados = dias + (anos * 365) + (meses * 30);
        printf("dias: %d\n",diasContados);

        return 0;
    }