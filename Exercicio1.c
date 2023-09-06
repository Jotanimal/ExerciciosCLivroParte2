#include <stdio.h>

int main(){

    int num1;
    int num2;
    int num3;
    int num4;

    printf("Digite quatro números inteiros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    if(num1 <= num2 && num1 <= num3 && num1 <= num4){
        printf("O menor número é: %d", num1);

    }else if(num2 <= num1 && num2 <= num3 && num2 <= num4){
        printf("O menor número é: %d", num2);

    }else if(num3 <= num1 && num3 <= num2 && num3 <= num4){
        printf("O menor número é: %d", num3);

    }else{
        printf("O menor número é: %d", num4);
    }
    return 0;
}