#include <stdio.h>

int main () {

float valor, mult;

printf("insira o gasto de agua do prédio comercial: ");
scanf("%f", &valor);

if (valor <= 10)
{
    printf("o valor será de R$44.95");
}
else if (valor <= 20)
{
    mult = valor * 8.75;
    printf("o valor será de R$%.2f", mult);
}
else if (valor <= 50)
{
    mult = valor * 16.76;
    printf("o valor será de R$%.2f", mult);
}
else {
    mult = valor * 17.46;
    printf("o valor será de R$%.2f", mult);
}



}