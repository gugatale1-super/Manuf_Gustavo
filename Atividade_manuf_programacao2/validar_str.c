#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    int num;

    printf("Insira alguma palavra: ");
    fgets(nome, 50, stdin);

    if(nome[0] == '\n'){
        printf("Dado inválido");
    }else{
        printf("Voce digitou:%s", nome);
    }
    return 0;
}