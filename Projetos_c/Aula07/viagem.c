#include <stdio.h>

int main(){

float tempo, velocidade, distancia, litros;
printf("digite o tempo gasto: ");
scanf("%f", &tempo);

printf("Digite a velocidade media: ");
scanf("%f", &velocidade);

distancia = tempo * velocidade;
printf("Distancia percorrida: %.2f\n", distancia);

litros = distancia / 12;
printf("Quantidade de litros de combustivel: %.2f\n", litros);
printf("velocidade méeia: %.2f", velocidade);

return 0;
}