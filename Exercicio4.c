#include <stdio.h>

int main(){

    double valorReal;
    double valorAbsoluto;

    printf("Digite um valor real para descobrir seu valor absoluto: ");
    scanf("%lf", &valorReal);

    // pode-se também utilizar as funções abs() e fabs()

    valorAbsoluto = valorReal;

    if(valorReal < 0){
        printf("Valor absoluto = %.2lf", -valorAbsoluto);
    }else{
        printf("Valor absoluto = %.2lf", valorAbsoluto); 
    }
    return 0;
}