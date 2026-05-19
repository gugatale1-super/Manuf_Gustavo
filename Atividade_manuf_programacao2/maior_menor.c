#include <stdio.h>

int main(){
    int num1, num2, num3;
    int mair, menor, soma;
    float media;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("Insira o terceiro numero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    media = soma / 3.0;
    if(num1 > num2 && num1 > num3){
        printf("O maior numero e:%d\n", num1);
    }
    else if( num2 > num1 && num2 > num3){
        printf("O maior numero e:%d\n", num2);
    }
    else if(num3 > num1 && num3 > num2){
        printf("O maior numero e:%d\n", num3);
    }
    if (num1 < num2 && num1 < num3){
        printf("O menor numero e:%d\n", num1);  
    }
    else if(num2 < num1 && num2 < num3){
        printf("O menor numero e:%d\n", num2);
    }
    else if(num3 < num1 && num3 < num2){
        printf("O menor numero e:%d\n", num3);
    }
    printf("A soma e:%d\n", soma);
    printf("A media e:%.2f", media);
    
    return 0;
}