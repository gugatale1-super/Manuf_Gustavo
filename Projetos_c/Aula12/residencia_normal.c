#include <stdio.h>

int main () {

float valor;
float mult;

printf("Digite o valor que consumiu de agua: ");
scanf("%f", &valor);

if (valor <= 10)
{
    printf("O valor da conta será R$22,38");
}
else if (valor <= 20)
{
    mult = valor * 3.50;
    printf("O valor será de R$%.2f", mult);
}
else if (valor <= 50)
{
    mult = valor * 8.75;
    printf("O valor será de R$%.2f", mult);
}
else{
    mult = valor * 7.31;
    printf("O valor será de R$%.2f", mult);
}


return 0;

}