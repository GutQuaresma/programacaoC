#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome [50];
    //sintaxe scanf
    //scanf("formato1" "formato2", &variavel1, variavel2...)

    /*printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);*/

    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);//ler uma linha inteira, não só até o primeiro espaço em branco, igual o scanf
    printf("Nome completo digitado: %s", nome); 

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("Digite uma das opções: ");
    scanf(" %c", &opcao);
    printf("Você escolheu a opção: %c\n", opcao);

    

}