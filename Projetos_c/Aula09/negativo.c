#include <stdio.h>
int main () {
int numero;
printf("Digite seu numero: ");
scanf("%d", &numero);

if (numero < 0)
{
    printf("seu numero e negativo");
}
else {
printf("Seu numero e positivo");
}
}