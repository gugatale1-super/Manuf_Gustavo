#include <stdio.h>

int main(){
    float vel, multa, excesso;

    printf("Digite a sua velocidade: ");
    scanf("%f", &vel);
    printf("Velocidade Permitida 80Km/h\n");

    if(vel <=80){
        printf("Voce estava na velocidade permitida!");
    }
    else{
       excesso = vel - 80;
       multa = excesso * 50;
       printf("Voce estava a %.2fkm/h\n", vel);
       printf("E excedeu %.2f\n", excesso);
       printf("Voce pagara R$%.2f de multa", multa);
    }

return 0;
}