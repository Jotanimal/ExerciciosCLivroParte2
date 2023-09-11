#include <stdio.h>

int main(){

    float tempCelsius, tempFahrenheit;

    printf("Para converter a temperatura para Fahrenheit, digite a temperatura em Celsius: ");
    scanf("%f", &tempCelsius);

    //fórmula para conversão de temperatura

    tempFahrenheit = (tempCelsius * 1.8 ) + 32;

    printf("A temperatura em Fahrenheit é de %.2f", tempFahrenheit);
}