#include <stdio.h>

int main() {

float valor, mult;

printf("Insira o gasto de agua em metros cúbicos: ");
scanf("%f", &valor);

if (valor <= 10)
{
    printf("o valor será de R$7.59");
}
else if (valor <= 20)
{
    mult = valor * 1.31;
    printf("O valor será de R$%.2f", mult);
}
else if (valor <= 30)
{
    mult = valor * 4.64;
    printf("O valor será de R$%.2f", mult);
}
else if (valor <= 50)
{
    mult = valor * 6.62;
    printf("O valor será de R$%.2f", mult);
}
else {
    mult = valor * 7.31;
    printf("O valor será de R$%.2f", mult);
}




}