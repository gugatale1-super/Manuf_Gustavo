#include <stdio.h>

int main () {

    float lad1, lad2, lad3;

    printf("digite o lado 1 do triangulo: ");
    scanf("%f", &lad1);

    printf("digite o lado 2 do triangulo: ");
    scanf("%f", &lad2);

    printf("digite o lado 3 do triangulo: ");
    scanf("%f", &lad3);

    if (lad1 + lad2 > lad3)
    {
        if (lad1 == lad2 && lad2 == lad3 && lad3 == lad1)
        {
            printf("é um triangulo equilatero");
        }
        else if (lad1 == lad2 && lad2   lad3 && lad1 == lad3)
        {
            printf("é um triangulo isoceles");
        }
        else {
            printf("é um triangulo escaleno");
        }
    }
    else {
        printf("não é possivel fazer um triangulo");
    }
}