#include <stdio.h>

int main () {
    int escolha;
    printf("-----------Urna eletronica-----------");
    printf("\n1-faca o L.\n");
    printf("\n2-Vote lobao.\n");
    printf("\n3-Vote o povo quer carabina\n");
    printf("\n4-vote na manga.\n");
    printf("\nDigite o numero para escolher a opcao: \n");
    scanf("%d", &escolha);  

    switch (escolha)
    {
    case 1:
        printf("Vai comer picanha semana que vem");
        break;
    case 2:
        printf("AUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU");
        break;
    case 3:
        printf("O povo quer comer!");
        break;
    case 4:
        printf("Vem pra sorocaba fih");
        break;
    
    default:
        printf("votou errado cabaco");
        break;
    }










}