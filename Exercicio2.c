#include <stdio.h>

int main(){

    char nome[40];
    int anoDeNascimento;
    int anoAtual = 2023;
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Olá, %s! Qual seu ano de nascimento? \n", nome);
    scanf("%d", &anoDeNascimento);

    // calculo da idade
    // futuramente adicionar mês do nascimento para melhor precisão da idade atual

    idade = anoAtual - anoDeNascimento;

    if(idade >= 18){
        printf("%s, você tem %d anos e é maior de idade", nome, idade);
    }else{
        printf("%s, você tem %d anos e é menor de idade", nome, idade);
    }
    return 0;
}