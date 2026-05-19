#include <stdio.h>

int main() {

    int opcao;

    printf("1- opção 1\n");
    printf("2- opção 2\n");
    printf("3- opção 3\n");
    printf("4- sair\n");
    printf("selecione uma opção: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Você escolheu a opção 1");
        break;
    case 2:
        printf("Você escolhe8 a opção 2");
        break;
    case 3:
        printf("Você escolheu a opção 3");
        break;
    case 4:
        printf("Você escolheu sair");
        break;
    default:
        printf("opção inválida");
        break;
    }

}