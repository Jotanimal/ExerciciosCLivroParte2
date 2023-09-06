#include <stdio.h>

int main(){

    float nota1;
    float nota2;
    float media;

    printf("Digite suas duas notas para saber se foi aprovado: ");
    scanf("%f", &nota1);
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    if(media >= 6){
        printf("Sua média é %.2f \n Aprovado.", media);
    }else{
        printf("Sua média é %.2f \n Reprovado.", media);
    }
}