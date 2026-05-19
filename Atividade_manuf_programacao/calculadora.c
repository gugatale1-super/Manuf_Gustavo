#include <stdio.h>
#include <math.h>
int main () {

    float result;
    int opcao, num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("---CALCULADORA---\n");
    printf("1- Adição\n");
    printf("2- Subtração\n");
    printf("3- Multiplicação\n");
    printf("4- Divisão\n");
    printf("5- potência\n");
    printf("6- Raiz quadrada\n");
    printf("7- Numero par/impar\n");
    printf("0- sair\n");

    printf("insira a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        result = num1 + num2;
        printf("Resultado: %.2f", result);
        break;
    case 2:
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        result = num1 - num2;
        printf("Resultado: %.2f", result);
        break;
    case 3:
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        result = num1 * num2;
        printf("Resultado: %.2f", result);
        break;
    case 4:
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        result = num1 / num2;
        printf("Resultado: %.2f", result);
        break;
    case 5:
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        result = pow(num1, num2);
        printf("Resultado: %.2f", result);
        break;
    case 6:
        result = sqrt(num1);
        printf("Resultado: %.2f", result);
        break;
    case 7:
        if (num1 % 2 == 0)
        {
            printf("O seu numero é par");
        }
        else {
            printf("não é par");
        }
        break;
    case 0:
        printf("Você escolheu sair");
    default:
        printf("A opção inserida não é valida");
        break;
    }
    
}