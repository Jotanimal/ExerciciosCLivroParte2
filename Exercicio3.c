#include <stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro para saber se é par ou ímpar: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Número par");
    }else{
        printf("Número ímpar");
    }
    return 0;   
}