#include <stdio.h>

int main() {

int ano;
printf("Digite o ano: ");
scanf("%d", &ano);

if (ano % 4 == 0)
{
    printf("Esse ano e bissexto");
}
else {
    printf("Nao e bissexto");
}
return 0;
}