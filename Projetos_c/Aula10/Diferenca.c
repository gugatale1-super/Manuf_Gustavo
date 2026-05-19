#include <stdio.h>

int main() {
    int A, B, Diferenca;

    printf("Insira o valor do primeiro numero: ");
    scanf("%d", &A);

    printf("Insira o valor do segundo numero: ");
    scanf("%d", &B);

    if (A == B)
    {
        printf("nao ha diferenca");
    }
    else if (A > B)
    {
        Diferenca = A - B;
        printf("A diferenca e: %d", Diferenca);
    }
    else {
        Diferenca = B - A;
        printf("A diferenca dos numeros: %d", Diferenca);
    }
}