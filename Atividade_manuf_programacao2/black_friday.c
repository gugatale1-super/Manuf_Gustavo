#include <stdio.h>

int main(){
    int opc;
    float cred, deb, pix, vista, valor, final;
    printf("******************************\n");
    printf("1. À vista (em espécie)\n");
    printf("2. Cartão de débito\n");
    printf("3. Cartão de crédito\n");
    printf("4. PIX\n");
     printf("******************************\n");
    printf("Digite a sua forma de pagamento: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("Insira o valor da compra: ");
        scanf("%f", &valor);

        vista = valor * 0.10;
        final = valor - vista;

        printf("Voce ira pagar %.2f", final);
        break;

        case 2:
        printf("Insira o valor da compra: ");
        scanf("%f", &valor);

        deb = valor * 0.05;
        final = valor - deb;

        printf("Voce ira pagar %.2f", final);
        break;

        case 3:
        printf("Insira o valor da compra: ");
        scanf("%f", &valor);

        cred = valor * 0.03;
        final = valor - cred;

        printf("Voce ira pagar %.2f", final);
        break;

        case 4:
        printf("Insira o valor da compra: ");
        scanf("%f", &valor);

        pix = valor * 0.075;
        final = valor - pix;

        printf("Voce ira pagar %.2f", final);
        break;

    default:
    printf("Opcao invalida");
        break;
    }

    return 0;
}