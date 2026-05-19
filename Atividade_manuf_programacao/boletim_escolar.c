#include <stdio.h>

int main () {
    float media, nota1, nota2, nota3, nota4;
printf("Insira o valor da primeira nota semestral do aluno: ");
scanf("%f", &nota1);
printf("Insira o valor da segunda nota semestral do aluno: ");
scanf("%f", &nota2);
printf("Insira o valor da terceira nota semestral do aluno: ");
scanf("%f", &nota3);
printf("Insira o valor da quarta nota semestral do aluno: ");
scanf("%f", &nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4;

if (media <= 3.9)
{
    printf("primeira nota: %.2f\n", nota1);
    printf("segunda nota: %.2f\n", nota2);
    printf("terceira nota: %.2f\n", nota3);
    printf("quarta nota: %.2f\n", nota4);
    printf("media final: %.2f\n", media);
    printf("Conceito: E");
    printf("Reprovado");
}
else if (media <= 5.9)
{
    printf("primeira nota: %.2f\n", nota1);
    printf("segunda nota: %.2f\n", nota2);
    printf("terceira nota: %.2f\n", nota3);
    printf("quarta nota: %.2f\n", nota4);
    printf("media final: %.2f\n", media);
    printf("Conceito: D\n");
    printf("Reprovado");
}
else if (media <=7.4)
{
    printf("primeira nota: %.2f\n", nota1);
    printf("segunda nota: %.2f\n", nota2);
    printf("terceira nota: %.2f\n", nota3);
    printf("quarta nota: %.2f\n", nota4);
    printf("media final: %.2f\n", media);
    printf("Conceito: C\n");
    printf("Aprovado!");
}
else if (media <= 8.9)
{
    printf("primeira nota: %.2f\n", nota1);
    printf("segunda nota: %.2f\n", nota2);
    printf("terceira nota: %.2f\n", nota3);
    printf("quarta nota: %.2f\n", nota4);
    printf("media final: %.2f\n", media);
    printf("Conceito: B\n");
    printf("Aprovado!!");
}
else if (media <= 10)
{
    printf("primeira nota: %.2f\n", nota1);
    printf("segunda nota: %.2f\n", nota2);
    printf("terceira nota: %.2f\n", nota3);
    printf("quarta nota: %.2f\n", nota4);
    printf("media final: %.2f\n", media);
    printf("Conceito: A\n");
    printf("Aprovado!!!");
}
}