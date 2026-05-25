#include <stdio.h>

int main(){

    float num[5];
    int i;
    for(i = 0; i < 5; i++){
    printf("Digite um numero: ");
    scanf("%f", &num[i]);
}
    for(i = 0; i < 5; i++){
    printf("Os numeros sao:%.2f\n", num[i]);
    }   

    return 0;
}