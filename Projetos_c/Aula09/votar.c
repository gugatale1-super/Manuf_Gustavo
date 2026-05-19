#include <stdio.h>

int main() {

int idade;
printf("Digite sua idade: ");
scanf("%d", &idade);

if (idade >= 16)
{
    printf("Pode votar");
}
else{
    printf("Pode nao man");
}
}