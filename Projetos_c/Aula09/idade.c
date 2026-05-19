#include <stdio.h>
int main() {
int idade;
printf("Digite sua idade:");
scanf("%d", &idade);
if (idade >= 18)
{
    printf("Voce é maior de idade");
}
else {
    printf("Nao é maior de idade");
}
return 0;
}