#include <stdio.h>

int main(){
    char nome [50];

    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome,"\n")] = 0;
    printf("Nome completo digitado: %s\n", nome);


}