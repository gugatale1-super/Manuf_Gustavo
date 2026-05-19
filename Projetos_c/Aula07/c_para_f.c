#include <stdio.h>
int main(){
//entrada
float c, f;
printf("Digite uma temperatura em celsius: ");
//processamento
scanf("%f", &c);
f = c * 9 / 5 + 32;
//saída
printf("Fahrenheit = %.2f", f);
}