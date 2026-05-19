#include <stdio.h>
#include <math.h>

int main(){

    float raio;
    float area;

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    area = 3.1415 * pow(raio,2);

    printf("Raio: %.1f\n", raio);
    printf("Sua area: %.2f", area);
} 