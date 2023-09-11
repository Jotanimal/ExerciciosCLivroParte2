#include <stdio.h>

int main(){

    float num1, num2, resultado;

    char operacao;

    printf("Realize uma operação matemática simples, utilizando dois números reais: ");
    scanf("%f %c %f", &num1, &operacao, &num2);
    switch (operacao){
        case '+':
            resultado = num1 + num2;
            printf("%.2f", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f", resultado);
            break;
        case '/': 
            resultado = num1 / num2;
            if(num1 == 0 || num2 == 0){
                printf("Não é permitido a divisão de um número por 0 \n");
            }else{
                printf("%.2f", resultado);       
            }
            break;
        default:
        printf("Operação Inválida \n");
    }
}