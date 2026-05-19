#include <stdio.h>
#include <string.h>

int main(){

    int senha;
    char usuario[25];

    printf("Digite seu nome de usuario: ");
    scanf("%s", usuario);
    printf("Digite a sua senha: ");
    scanf("%d", &senha);

    if(senha == 12345 && strcmp(usuario, "atila") == 0){
        printf("Seja bem vindo!");
    }else if(senha == 54321 && strcmp(usuario, "olivi") == 0){
        printf("Seja bem vindo!");
    }else{
        printf("Usuário e/ou senha não conferem");
    }

    return 0;
}