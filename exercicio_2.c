#include <stdio.h>
    int main(){
        float Celsius=0;
        scanf("%f", &Celsius);

        float Fahrenheit = (Celsius * 9/5) + 32;
        float Kelvin = Celsius + 273.15; 

        printf("temperatura em Fahrenheit: %2.f\n temperatura em Kelvin: %2.f",Fahrenheit,Kelvin);
        return 0;
    }