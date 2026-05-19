#include <stdio.h>

int main () {

float valor;
float mult;

printf("Digite o valor gasto: ");
scanf("%f", &valor);

if (valor <= 10)
{
    printf("sera gasto R$44.95");
}
else if (valor <= 20)
{
    mult = valor * 8.75;
    printf("sera pago %.2f", mult);
}
else if (valor <= 50)
{
    mult = valor * 16.76;
    printf("sera pago %.2f", mult);
}
else{
    mult = valor * 17.46;
    printf("sera pago %.2f", mult);
}


}