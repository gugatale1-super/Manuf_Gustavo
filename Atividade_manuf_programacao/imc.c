#include <stdio.h>
#include <math.h>
int main (){
float peso, altura, imc;


printf("insira sua altura: ");
scanf("%f", &altura);

printf("insira seu peso: ");
scanf("%f", &peso);

imc = peso / pow(altura, 2);

if (imc < 16)
{
    printf("Magreza grave");
}
else if (imc <= 17)
{
    printf("Magreza moderada");
}
else if (imc <= 18.5)
{
    printf("Magreza leve");
}
else if (imc <= 25)
{
    printf("Saúdável");
}
else if (imc <= 30)
{
    printf("Sobrepeso");
}
else if (imc <= 35)
{
    printf("Obesidade grau 1");
}
else if (imc <= 40)
{
    printf("Obesidade grau 2(severa)");
}
else
{
    printf("Obesidade grau 3(mórbida)");
}

}
