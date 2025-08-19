#include <stdio.h>

int main(){
    int idade = 23;
    float altura = 1.76;
    char opcao = 'A';
    char nome[20] = "Gutierre";

    printf("O nome do usuário é: %s\n", nome);
    printf("A idade do usuário é: %d\n", idade);
    printf("A altura do usuário é: %.2f\n", altura);
    printf("O usuário escolheu a opção: %c\n", opcao);

    /*
    printIf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.

    */


};