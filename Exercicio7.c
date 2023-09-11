#include <stdio.h>

int main(){

    float num1, num2, num3, num4, num5, media;

    printf("Para calcular a média de cinco números, digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Agora, digite o segundo número: ");
    scanf("%f", &num2);

    printf("Terceiro número: ");
    scanf("%f", &num3);

    printf("Quarto número: ");
    scanf("%f", &num4);

    printf("Quinto número: ");
    scanf("%f", &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;

    if(num1 > 0 && num1 < 1000 && num2 > 0 && num2 < 1000 && num3 > 0 && num3 < 1000 && num4 > 0 && num4 < 1000 && num5 > 0 && num5 < 1000){
        printf("O resultado da média é igual a: %.2f", media);
    }else{
        printf("Erro: valores inválidos.");
    }
}