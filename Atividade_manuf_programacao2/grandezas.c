#include <stdio.h>

int main(){
    float tensao, resistencia, corrente;
    int opc;
    printf("******************************\n");
    printf("CÁLCULO DE GRANDEZAS ELÉTRICAS\n");
    printf("******************************\n");
    printf("1. Tensão (em Volt)\n");
    printf("2. Resistência (em Ohm)\n");
    printf("3. Corrente (em Ampére)\n");
    printf("4. Sair do programa\n");
    printf("******************************");
    printf("Selecione uma opcao: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("Voce saiu");
        break;

    case 2:
    printf("Insira o valor da Resistencia: ");
    scanf("%f", &resistencia);
    printf("Insira o valor da Corrente: ");
    scanf("%f", &corrente);
    tensao = resistencia * corrente;
    printf("O valor da tensao e %.2f", tensao);
        break;

        case 3:
        printf("Insira o valor da Tensao: ");
        scanf("%f", &tensao);
        printf("Insira o valor da Corrente: ");
        scanf("%f", &corrente);
        resistencia = tensao / corrente;
        printf("O valor da Resistencia e %.2f", resistencia);

        break;

        case 4:
        printf("Insira o valor da Tensao: ");
        scanf("%f", &tensao);
        printf("Insira o valor da Resistencia: ");
        scanf("%f", &resistencia);
        corrente = tensao / resistencia;
        printf("O valor da corrente e %.2f", corrente);
        break;

        default:
        printf("Opçao invalida!!!");
        break;
    }
    return 0;
}