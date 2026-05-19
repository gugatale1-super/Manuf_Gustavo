#include <stdio.h>
#include <math.h>

int main() {

float volume, raio, altura;
printf("insira o valor de raio: ");
scanf("%f", &raio);
printf("insira o valor de altura:");
scanf("%f", &altura);

volume = 3.14159 * pow(raio,2) * altura;


printf("volume: %.2f",volume);





}