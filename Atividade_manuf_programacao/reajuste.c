#include <stdio.h>

int main () {

float salario, aumento, novo;

printf("digite o seu salario para calcular seu reajuste salarial: ");
scanf("%f", &salario);

if (salario <= 1000)
{
    aumento = salario * 0.20;
    novo = salario + aumento;
    printf("Salario digitado: R$%.2f\n", salario);
    printf("aumento de: 20%%\n");
    printf("valor do aumento: %.2f\n", aumento);
    printf("salario reajustado: %.2f", novo);
}
else if (salario <= 1700)
{
    aumento = salario * 0.15;
    novo = salario + aumento;   
    printf("salario digitado: %.2f\n", salario);
    printf("aumento de 15%%\n");
    printf("valor do aumento: %.2f\n", aumento);
    printf("salario reajustado: %.2f", novo);
}
else if (salario <= 2300)
{
    aumento = salario * 0.10;
    novo = salario + aumento;
    printf("salario digitado: %.2f\n", salario);
    printf("aumento de 10%%\n");
    printf("valor de aumento: %.2f\n", aumento);
    printf("salario reajustado: %.2f", novo);
}
else {
    aumento = salario * 0.05;
    novo = salario + aumento;
    printf("salario digitado: %.2f\n", salario);
    printf("aumento de 5%%\n");
    printf("valor de aumento: %.2f\n", aumento);
    printf("salario reajustado: %.2f", novo);
}
}