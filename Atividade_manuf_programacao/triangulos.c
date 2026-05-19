#include <stdio.h>

int main () {

    float lad1, lad2, lad3;
    printf("insira o valor do lado 1: ");
    scanf("%f", &lad1);
    printf("insira o valor do lado 2: ");
    scanf("%f", &lad2);
    printf("insira o valor do lado 3: ");
    scanf("%f", &lad3);

    if (lad1 + lad2 > lad3 && lad1 + lad3 > lad2 && lad2 + lad3 > lad1)
    {
        if (lad1 == lad2 && lad2 == lad3)
        {
            printf("é um triangulo equilátero");
        }
        else if (lad1 == lad2 || lad2 == lad3 || lad3 == lad1)
        {
            printf("é um triangulo isóceles");
        }
        else {
            printf("é um triangulo escaleno");
        }
        
    }
    else {
        printf("não é possivel fazer um triangulo com essas medidas");
    }


}