#include <stdio.h>
int main() {
int numero;
printf("Digite o numero: ");
scanf("%d", &numero);
if (numero % 2 == 0)
{
    printf("Este numero é par");
}
else
{
    printf("Este numero é impar");
}
return 0;
}