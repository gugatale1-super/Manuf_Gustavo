#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int num;
    char num1[50];

    printf("Insira um numero: ");
    fgets(num1, 50, stdin);

    if(num1[0] == '\n'){
        printf("Numero inválido");
    }
    else{
        
        num = atoi(num1);
        printf("Voce digitou:%d", num);
    }
    return 0;
}