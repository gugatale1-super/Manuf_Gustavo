#include <stdio.h>

int main(){
    int opcao;
    float num1, num2, resultado;
    printf("\n---CALCULADORA C---\n");
    printf("1- Adição\n");
    printf("2- subtracao\n");
    printf("3- multiplicacao\n");
    printf("4- divisao\n");
    
    printf("Selecione uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);  
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        resultado = num1 + num2;
        printf("seu resultado: %.2f",resultado );
        break;
    case 2:
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        resultado = num1 - num2;
        printf("seu resultado: %.2f",resultado );
        break;
    case 3:  
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        resultado = num1 * num2;
        printf("seu resultado: %.2f",resultado );
        break;
    case 4:
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        resultado = num1 / num2;
        printf("seu resultado: %.2f",resultado );
        break;
    default:
        break;
    }
}