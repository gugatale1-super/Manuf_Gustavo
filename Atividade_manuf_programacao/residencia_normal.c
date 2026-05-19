#include <stdio.h>

int main() {

float valor, mult;

printf("Insira o gasto de agua em metros cúbicos da residencia comum: ");
scanf("%f", &valor);

if (valor <= 10)
{
    printf("o valor será de R$22.38");
}
else if (valor <= 20)
{
    mult = valor * 3.50;
    printf("O valor será de R$%.2f", mult);
}
else if (valor <= 30)
{
    mult = valor * 8.75;
    printf("O valor será de R$%.2f", mult);
}
else {
    mult = valor * 9.64;
    printf("O valor será de R$%.2f", mult);
}
}