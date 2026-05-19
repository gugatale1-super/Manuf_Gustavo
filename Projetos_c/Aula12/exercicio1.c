#include <stdio.h>

int main () {

int valor, mult;
printf("digite um numero para exibir sua tabuada ate 10: ");    
scanf("%d", &valor);

printf("---Tabuada---\n");

for (int i = 1; i <= 10; i++)
{
    mult = i * valor;
    printf("%d x %d = %d\n", i, valor, mult);
}





}