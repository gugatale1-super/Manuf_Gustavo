#include <stdio.h>
#include <math.h>

int main () {

float peso, altura, imc;

printf("Digite seu peso: ");
scanf("%f", &peso);
printf("Digite sua altura: ");
scanf("%f", &altura);

imc = peso / pow(altura, 2);

if (imc < 16)
{
    printf("magreza grave!!");
}
else if (imc < 17)
{
    printf("Magreza moderada");
}
else if (imc < 18.5)
{
    printf("Magreza leve");
}
else if (imc < 25)
{
    printf("Saudavel");
}
else if (imc < 30)
{
    printf("Sobrepeso");
}
else if (imc < 35)
{
    printf("Obesidade grau 1");
}
else if (imc < 40)
{
    printf("Obesidade grau 2 (Grave)");
}
else if (imc >  40)
{
    printf("Obesidade grau 3 (morbida)");
}


}