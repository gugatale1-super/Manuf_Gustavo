#include <stdio.h>

int main(){
    float dist, valor;

    printf("Qual a distancia que voce deseja percorrer em km? ");
    scanf("%f", &dist);

    if(dist <=200){
        valor = dist * 0.50;
        printf("Voce ira pagar:R$%.2f", valor);

    }
    else{
        valor = dist * 0.45;
         printf("Voce ira pagar:R$%.2f", valor);

    }
    return 0;
}