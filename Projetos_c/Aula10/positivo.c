#include <stdio.h>

int main() {

int n, conta;
printf("Insira o valor do numero: ");
scanf("%d", &n);

if (n == 0)
{
    printf("Neutro");
}
else if (n < 0)
{
    conta = n * -1;
    printf("virou positivo\n");
    printf("Resultado: %d", conta);
}

else
{
    printf("positivo");
    printf("Resultado: %d", n);
}
