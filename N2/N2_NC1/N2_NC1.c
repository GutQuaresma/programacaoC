#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, sub, mult, div;

    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o número 2: \n");
    scanf("%d", &numero2);

    //Operação soma
    soma = numero1 + numero2;

    //Operação subtração
    sub = numero1 - numero2;

    //Operação Multiplicação
    mult = numero1 * numero2;

    //Operação divisão
    div = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", sub);
    printf("A Multiplicação é: %d\n", mult);
    printf("A Divisão é: %d\n", div);

}