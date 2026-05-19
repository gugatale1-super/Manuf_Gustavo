#include <stdio.h>

int main() {

long int nota;
printf("Digite a nota do aluno: ");
scanf("%d", &nota);

if (nota >= 7)
{
    printf("Aprovado");
}
else {
    printf("Reprovado");
}
return 0;
}